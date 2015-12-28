#ifndef B_plus_Tree_h
#define B_plus_Tree_h
#include <iostream>
#include <cstdlib>
#define block_size 4096
#include "file_block.h"
#include "node.h"


template <class K>
class B_plus_Tree {
 public:
	B_plus_Tree();
//  ~B_plus_Tree();


  	void insert(K key, block* address);

le(n� raiz);
procura(chave); //retorna caminho
 if n�=folha {
 	se n�o cheio
 	  insere_normal
 	se cheio
 	  		
 }
 se n�o{
 	insere(caminho)
 }
 	
   
/*  Recebe: um par (chave e ponteiro para bloco);
 * 
 *  A��o: -Procura pelo n� onde deve ser inserido (comparando com os valores dos n�s atual e segue para maoir/menor
 *        -Verifica se est� cheio
 *           Se estiver: 
 * 				Em n�vel folha:   Chama a fun��o divide do n� (esta cria um n� novo, divide os valores e retorna a chave promovida
 * 			    Em n�vel interno: Passa como par�metro a chave promovida do divide (do n� filho). 
 *           Se n�o: Apenas passa para o n� qual par deve ser inserido.	
 * 
 * 
 */

  	bool find(K key, block* address);

/* 
 * 
 * 
 * 
 * 
 * 
 */
 
  	void print_IN_ORDER();
  	
  	
  	void print_PRE_ORDER();
 private:
  	node<K>* R;
  	void insertAtroot(K key,block* address);
  	void IN_ORDER_helper(node<K>* ptr);
  	void PRE_ORDER_helper(node<K>* ptr);
    
};
