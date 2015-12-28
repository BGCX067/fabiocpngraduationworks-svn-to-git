/*
 * Disciplina: Laboratório de Sistemas Operacionais
 * Fábio C. P. Navarro RA: 254371
 * Professor: Hélio
 * Enunciado EXERCICIO 3:Criar um programa que faz a  soma de 2 matrizes, atribuindo a soma de cada linha a um processo diferente. As matrizes podem ser geradas aleatoriamente, ou lidas via console. Apenas 1 processo deve imprimir o resultado final.
 *
 *
 */
#include <stdio.h>     
#include <stdlib.h>    
#include <sys/types.h>
#include <sys/ipc.h>   
#include <sys/shm.h>   
#include <sys/time.h>
#include <sys/wait.h>


#define BUF_SIZE 1024
#define MAX_COLUNAS 10 
#define MAX_LINHAS 10
#define MAX_VALOR 20 //Para facilitar DEBUG

void seed_random();

int main(){
	 
	int *resultado;

	pid_t pid;
	int shmid,status;

	int n_colunas,n_linhas,linha,coluna;
	seed_random();

	//Cria matriz
	n_colunas = (lrand48()%(MAX_COLUNAS-1))+1;
	n_linhas = (lrand48()%(MAX_LINHAS-1))+1;
	printf("Colunas: %d, Linhas: %d.\n",n_colunas,n_linhas);fflush(stdout);	
	int matrizA[n_colunas][n_linhas];
	int matrizB[n_colunas][n_linhas];
	int matrizR[n_colunas][n_linhas];

	//Alimenta matriz criada
	for (linha=0;linha<n_linhas;linha++)
		for (coluna=0;coluna<n_colunas;coluna++){
			matrizA[coluna][linha] = lrand48()%MAX_VALOR;
			matrizB[coluna][linha] = lrand48()%MAX_VALOR;
		}


	//Cria memoria compartilhada
	if ((shmid = shmget(424242, BUF_SIZE, 0644 | IPC_CREAT)) == -1) {
		perror("shmget");
		exit(1);
	}
	
	//Liga poteiro a memoria compartilhada
	resultado = (int*)shmat(shmid,NULL,0);
                                                
	for (linha=0;linha<n_linhas;linha++){
		
		//Cria processo filho
		if ((pid=fork())>-1){
			//Se for filho:
			if (!pid){
				for (coluna=0;coluna<n_colunas;coluna++){
					resultado[coluna]=matrizA[coluna][linha]+matrizB[coluna][linha];
					//DEBUG: printf("DEBUG SOMA: %d + %d = %d\n",matrizA[coluna][linha],matrizB[coluna][linha], resultado[coluna]);fflush(stdout);
				}
				exit(0);
			}
			//Pai
			else{
				waitpid(pid,&status,0);
				if (WIFEXITED(status)) {
					for (coluna=0;coluna<n_colunas;coluna++){
						matrizR[coluna][linha]=resultado[coluna];
					}
				}	
			}
		}
		//Problema ao criar processo
		else{
			perror("fork");
			exit(1);
		}

	}

	//Imprimindo todas as matrizes
	for (linha=0;linha<n_linhas;linha++){
		for (coluna=0;coluna<n_colunas;coluna++){
			printf("%d",matrizA[coluna][linha]);
			printf(" , "); fflush(stdout);
		}
		printf("\n");fflush(stdout);
	}
	printf("\n+\n");fflush(stdout);
	for (linha=0;linha<n_linhas;linha++){
		for (coluna=0;coluna<n_colunas;coluna++){
			printf("%d",matrizB[coluna][linha]);
			printf(" , "); fflush(stdout);
		}
		printf("\n");fflush(stdout);
	}

	printf("\n=\n");fflush(stdout);
	for (linha=0;linha<n_linhas;linha++){
		for (coluna=0;coluna<n_colunas;coluna++){
			printf("%d",matrizR[coluna][linha]);
			printf(" , "); fflush(stdout);
		}
		printf("\n");fflush(stdout);
	}

	if (shmdt((int*)resultado) == -1) {
       		perror("shmdt");
        	exit(1);
	}
	

		
	return 0;
}


void seed_random(){
	struct timeval time;
	(void)gettimeofday(&time,NULL);
	srand48((long)time.tv_usec);
}
