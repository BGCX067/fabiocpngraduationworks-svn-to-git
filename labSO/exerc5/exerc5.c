/*
 * Disciplina: Laboratório de Sistemas Operacionais
 * Fábio C. P. Navarro RA: 254371
 * Professor: Hélio
 * Enunciado EXERCICIO 5: 
 *	Produtor X Consumidor
 *
 *	Construir um programa produtor X consumidor utilizando um buffer circular em memória compartilhada.
 *
 *	Para efeitos de teste, a produção de itens pode ser representada pela entrada de dados via console. Da mesma forma, o consumo pode estar relacionado ao recebimento dos dados lidos e de suas impressões, também no console.
 *	Itens produzidos (strings lidas) devem ser colocados num buffer circular em uma area de memória compartilhada entre o produtor e o consumidor.
 *	Semáforos devem ser utilizados para sincronizar o acesso à memória compartilhada e para indicar a existência de itens produzidos e espacos no buffer para a inserção de novos dados.
Semáforos:
 *
 *   * item: indica o número de itens produzidos
 *   * espaço: indica o número de espacos no buffer
 *   * mutex: garante exclusão mútua no acesso ao buffer compartilhado 
 * 	
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <errno.h>

#define N_TIMES 5
#define MAX 128
#define TAM_BUF 10

int get_from_circular_buf();
void set_in_circular_buf(int);

sem_t s_prod, s_bufleft, s_mutex; // semaforos

int posi=-1,posl=-1;
int buf[TAM_BUF];
int sai=0;


void *produz(void *n_times)
{
	while (sai==0){
		int* valor_s_bufleft;
		sem_getvalue(&s_bufleft,(int*)&valor_s_bufleft);

		if((int*)valor_s_bufleft != 0){
        		//Espera até resurso estar disponivel
			sem_wait(&s_mutex);
			//Diminiu espaco no buffer
			sem_trywait(&s_bufleft);
			//aumentar numero de produtos
			sem_post(&s_prod);
			
			int lido;
			printf("Entre com o inteiro a ser adicionado no buffer:");
			scanf("%d",&lido);
			if (lido != -1){
       				sleep(random()%3);
				set_in_circular_buf(lido);
			}                      
			else {
				sai=1;
			}
			//libera recurso
			sem_post(&s_mutex);
		}
		//Buffer cheio
		else    {
                	printf("Buffer Cheio, esperando...\n");
			sleep(random()%15);
		}

	}
	pthread_exit(NULL);
	
}       

void *consome(void *n_times)
{
    	while (sai==0){
		int* valor_s_prod;
       		sem_getvalue(&s_prod,(int*)&valor_s_prod);

       		if ((int*)valor_s_prod > 0){
       			//Espera até o buffer não ser utilizado
       	       	 	sem_wait(&s_mutex);
       			//Consome um produto
                	sem_trywait(&s_prod);
       			//Disponibiliza um espaço no buffer
       			sem_post(&s_bufleft);
       			//Consumo propriamente dito
			int lido;
			lido=get_from_circular_buf();
       			printf("Consumindo o texto: %d\n",lido);
			//Libera Recurso
       			sem_post(&s_mutex);
       			sleep(random()%5);

       		}
		//Buffer vazio
		else{
                	printf("Buffer Vazio, esperando...\n");
       			sleep(random()%5);
		}
	}
	pthread_exit(NULL);
}
 

int main()
{
	pthread_t th_prod, th_cons;
	char err_msg[MAX];

	// char *strerror_r(int errnum, char *buf, size_t buflen);

	//Cria os três semaforos
	if (sem_init(&s_bufleft, 0, TAM_BUF) < 0) {
		strerror_r(errno,err_msg,MAX);
         	printf("Erro em sem_init: %s\n",err_msg);
         	exit(1);
	}

	if (sem_init(&s_prod, 0, 0) < 0) {
		strerror_r(errno,err_msg,MAX);
		printf("Erro em sem_init: %s\n",err_msg);
		exit(1);
	}
         
	if (sem_init(&s_mutex,0,1) < 0 ){
                strerror_r(errno,err_msg,MAX);
		printf("Erro em sem_init: %s\n",err_msg);
		exit(1);
	}

	//Cria os threads
	if (pthread_create(&th_prod, NULL, produz, (void *)N_TIMES) != 0) {
		strerror_r(errno,err_msg,MAX);
		printf("Erro em pthread_create: %s\n",err_msg);
		exit(1);
	}
	if (pthread_create(&th_cons, NULL, consome, (void *)N_TIMES) != 0) {
		strerror_r(errno,err_msg,MAX);
		printf("Erro em pthread_create: %s\n",err_msg);
		exit(1);
	}

	//Inicializa o thread
	pthread_join(th_prod, NULL);
	pthread_join(th_prod, NULL);
        
	//Destroi os semaforos
	sem_destroy(&s_prod);
	sem_destroy(&s_mutex);
	sem_destroy(&s_bufleft);
          
	return(0);
}
    
//Simula um _get_ numa lista circular
int get_from_circular_buf(){
	posl++;
	posl = posl%TAM_BUF;
	return buf[posl];
}     

//Simula um _set_ numa lista circular
void set_in_circular_buf(int conteudo){
	posi++;
	posi=posi%TAM_BUF;
	buf[posi]=conteudo;
}
