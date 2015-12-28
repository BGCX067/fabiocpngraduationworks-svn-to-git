
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <errno.h>


#define N_TIMES	5
#define MAX 128
#define TAM_BUF 10
char* get_from_circular_buf();
void set_in_circular_buf(char*);

sem_t s_prod, s_bufleft, s_mutex; // semaforos

int _val,posi=-1,posl=-1;
char* buf[TAM_BUF];
int sai=0;


void *produz(void *n_times)
{
	while (sai==0){
		int* valor_s_bufleft;
		sem_getvalue(&s_bufleft,(int*)&valor_s_bufleft);

		if((int*)valor_s_bufleft != 0){
        		sem_wait(&s_mutex);
			sem_trywait(&s_bufleft);
			sem_post(&s_prod);


				
			char* lido;
			printf("Entre com o texto:");
			scanf("%s",(char*)&lido);
			set_in_circular_buf((char*)&lido);
			//set_in_circular_buf((char*)&lido);
			/*if (strcmp(lido,"fim")!=0){
       				sleep(random()%2);
			}                      
			else {
				sai=1;
			}
			  */
			sem_post(&s_mutex);

		}
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
			char* lido;
			lido=get_from_circular_buf();
       			printf("Consumindo o texto: %s\n",lido);
       			sem_post(&s_mutex);
       			sleep(random()%5);

       		}
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
	_val = 0;

	// char *strerror_r(int errnum, char *buf, size_t buflen);

	// int sem_init (sem_t *sem, int pshared, unsigned int value);
	if (sem_init(&s_bufleft, 0, TAM_BUF) < 0) {
		strerror_r(errno,err_msg,MAX);
         	printf("Erro em sem_init: %s\n",err_msg);
         	exit(1);
	}

	// int sem_init (sem_t *sem, int pshared, unsigned int value);
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
        /*
	sem_post(&s_prod);
	int* teste;
	sem_getvalue(&s_prod,&teste);
	printf("Debug:  valor do semaforo:%d\n",teste);
	sem_post(&s_prod);
	sem_post(&s_prod);
	sem_getvalue(&s_prod,&teste);
	printf("Debug:  valor do semaforo:%d\n",teste);

	sem_trywait(&s_prod);
	sem_trywait(&s_prod);
	sem_getvalue(&s_prod,&teste);
	printf("Debug:  valor do semaforo:%d\n",teste);
        
	buf[0]="este";
	char* lido;
	lido=get_from_circular_buf();
	printf("Debug2: a string é:%s\n",buf[0]);
	
        */
         /*
	char* temp;
	strcpy((char*)&temp,"aaaa");
	buf[0]=temp;
	
	//strcpy(&buf[0],"aaa");
	printf("Debug: %s",&buf[0]);
	*/
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

	pthread_join(th_prod, NULL);
	pthread_join(th_prod, NULL);
        
	sem_destroy(&s_prod);
	sem_destroy(&s_mutex);
	sem_destroy(&s_bufleft);
          
	return(0);
}
    
char* get_from_circular_buf(){
	posl++;
	posl = posl%TAM_BUF;
	//printf("DEBUG:GET: %s\n",(char*)&buf[posl]);
	return (char*)&buf[posl];
}     

void set_in_circular_buf(char* conteudo){
	//printf("DEBUG:SET: %s\n",(char*)conteudo);
	posi++;
	posi=posi%TAM_BUF;
	buf[posi]="";
	strcpy((char*)&buf[posi],conteudo);
	//printf("DEBUG:SET: %s\n",(char*)&buf[posi]);
}
