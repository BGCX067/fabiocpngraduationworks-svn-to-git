//B_plus_Tree.cpp
#include <iostream>
#include <cassert>
#include <fstream>
#include <cstdlib>
#include "B_plus_Tree.h"
#include "node.h"
#include "file_block.h"
#define block_size 4096
using namespace std;

template <class K>
B_plus_Tree<K>::B_plus_Tree(char* file_name const){
 level = 0;
 R = -1;
}

template <class K>
B_plus_Tree<K>::~B_plus_Tree(){
}

template <class K>
void B_plus_Tree<K>::insert(K key, block* address){
 insertAtRoot(key,address);
}

template <class K>
void B_plus_Tree<K>::insertAtRoot(K key, block* address){
 bool insertion = false;
 bool divided = false;
 K promoted;
 node<K>* created_node;
 // ABRE O ARQUIVO, PEGA O NÓ DA RAIZ E O LEVEL DA RAIZ
 if (R == -1){
  level++;
  node<K>* first_leaf_node;
  assert(first_leaf_node!=0);
  first_leaf_node = new node<K>(false);
  insertion = first_leaf_node.insert(first_leaf_node,key,address,divided,promoted,created_node);
  // GRAVA O NÓ NO ARQUIVO E A RAIZ NOVA E O LEVEL NOVO
 }
 else {
  node<K> ptr_list[*this.level];
  int current_level = 0;
  node<K>* current_node;
  current_node = R;
  ptr_list[0] = R;
  // ABRE O BLOCO DO NÓ ATUAL
  while (current_node.getType()) {
   // ABRE O BLOCO DO NÓ ATUAL
   next_node = current_node;
   search = next_node.find(next_node,key,address);
   if (current_node.getType()) {
    current_level++;
    ptr_list[current_level] = next_node;
   }
   else
    if (current_node.isFull()){
     current_node.divide(key,address,promoted,created_node);
     divide = true;
    }
    else
     insertion = current_node.insert(current_node,key,address,divided,promoted,created_node);
   // FECHA O NÓ ATUAL
  }
  while(divided && current_level > 0) {
   current_level--;
   current_node = ptr_list[current_level];
   // ABRE O BLOCO ATUAL
   if (current_node.isFull()){
    current_node.divide(promoted,reinterpret_cast<block*>(&ptr_list[current_level+1]),promoted,created_node);
    divide = true;
   }
   else
    insertion = current_node.insert(current_node,promoted,reinterpret_cast<block*>(&ptr_list[current_level+1]),divided,promoted,created_node);
   // FECHA O NÓ ATUAL
  }
  if (divided) {
   node<K>* new_internal_node;
   assert(new_internal_node!=0);
   new_internal_node = new node<K>(true);
   insertion = new_internal_node.insert(new_internal_node,promoted,reinterpret_cast<block*>(&created_node),divided,promoted,created_node);
   new_internal_node.setPTR(0,R);
   R = new_internal_node;
   level++;
   new_internal_node = -1;
   delete new_internal_node;
   // GRAVA OS NÓS ATUAIS, A POSIÇÃO DA RAIZ E O NIVEL DA ÁRVORE
  }
 }
}

template <class K>
bool B_plus_Tree<K>::find(K key, block* address){
 // ABRE O ARQUIVO, PEGA O NÓ DA RAIZ
 bool search;
 node<K>* current_node;
 node<K>* next_node;
 current_node = R;
 // ABRE O BLOCO DO NÓ ATUAL
 while (current_node.getType()) {
  // ABRE O BLOCO DO NÓ ATUAL
  next_node = current_node;
  search = next_node.find(next_node,key,address);
  // FECHA O NÓ ATUAL
  current_node = next_node;
 }
 return search;
}
