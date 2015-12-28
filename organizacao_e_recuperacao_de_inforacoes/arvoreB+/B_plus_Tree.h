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

le(nó raiz);
procura(chave); //retorna caminho
 if nó=folha {
 	se não cheio
 	  insere_normal
 	se cheio
 	  		
 }
 se não{
 	insere(caminho)
 }
 	
   
/*  Recebe: um par (chave e ponteiro para bloco);
 * 
 *  Ação: -Procura pelo nó onde deve ser inserido (comparando com os valores dos nós atual e segue para maoir/menor
 *        -Verifica se está cheio
 *           Se estiver: 
 * 				Em nível folha:   Chama a função divide do nó (esta cria um nó novo, divide os valores e retorna a chave promovida
 * 			    Em nível interno: Passa como parâmetro a chave promovida do divide (do nó filho). 
 *           Se não: Apenas passa para o nó qual par deve ser inserido.	
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
