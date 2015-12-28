//leaf_node.cpp
#include <iostream>
#include <cassert>
#include <fstream>
#include <cstdlib>
#define block_size 4096
#include "node.h"
#include "file_block.h"
#include "leafNODE.h"
using namespace std;

template <class K>
leaf_node<K>::leaf_node() {
 type = 0;
 lNODE.counter = 0;
 for (int i = 0; i<(1+(block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*))); i++)
  lNODE.ptr[i] = -1;
}

template <class K>
leaf_node<K>::~leaf_node() {
 // VERIFICAÇÃO QUE INCLUI DELEÇÃO DO RESPECTIVO BLOCO NO HD
}

template <class K>
bool leaf_node<K>::insert(node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node){
 int order = 1+(block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*));
 //ABRE O NÓ
 if(current_node.find(current_node,key,address)) {
  //FECHA O NÓ
  return false; // duplicata
 }
 else{
  if (!current_node.full) {
   if (key > current_node.lNODE.keys[current_node.lNODE.counter-1]) {
    current_node.lNODE.keys[current_node.lNODE.counter] = key;
    current_node.lNODE.ptr[current_node.lNODE.counter+1] = address;
   }
   else {
    int pos;
    bool search = binarySearch(current_node.lNODE.keys,current_node.lNODE.counter,key,pos);
    K temp_key1, temp_key2;
    block* temp_address1;
    block* temp_address2;
    temp_key1 = current_node.lNODE.keys[pos+1];
    temp_address1 = current_node.lNODE.ptr[pos+2];
    for (int i = pos+2; i < current_node.lNODE.counter; i++){
     temp_key2 =  current_node.lNODE.keys[i];
     temp_address2 = current_node.lNODE.ptr[i+1];
     current_node.lNODE.keys[i] = temp_key1;
     current_node.lNODE.ptr[i+1] = temp_address2;
     temp_key1 = temp_key2;
     temp_address1 = temp_address2;
    }
    current_node.lNODE.keys[current_node.lNODE.counter] = temp_key1;
    current_node.lNODE.ptr[current_node.lNODE.counter+1] = temp_address1;
    temp_address1 = -1;
    temp_address2 = -1;
    delete temp_address1;
    delete temp_address2;
   }
   current_node.lNODE.counter++;
   if (current_node.lNODE.counter == order-1)
    current_node.full = true;
   divided = false;
   //FECHA O NÓ
   return true;
  }
  else {
   leaf_node<K>* created_node;
   assert(created_node!=0);
   created_node = new leaf_node;
   divide(key,address,promoted,current_node,created_node);
   //GRAVAÇÃO DOS DOIS NÓS NO HD!
   return true;
  }
 }
}

template <class K>
bool leaf_node<K>::find (node<K>* current_node, K key, block* address){
 // ABRIR NÓ PARA LEITURA DO HD
 int pos;
 bool search = binarySearch(current_node.lNODE.keys,current_node.lNODE.counter,pos);
 if (search)
  address = current_node.lNODE.ptr[pos+1];
 // FECHAR NÓ
 return search;
}

template <class K>
void leaf_node<K>::print(node<K>* current_node){
 // ABRIR NÓ PARA LEITURA DO HD
 for (int i = 0; i < (block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*)); i++)
  cout<<lNODE.keys[i]<<" ";
 cout<<" ";
 // FECHAR NÓ
} 

template <class K>
void leaf_node<K>::divide (K key, block* address, K promoted, node<K>* dividedNODE, node<K>* createdNODE){
 int n = 1+(block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*));
 leaf_node<K>* newNODE;
 assert(newNODE!=0);
 newNODE = new leaf_node;
 if (K < dividedNODE.lNODE.keys[(n-1)/2]) {
  if (K > dividedNODE.lNODE.keys[(n-1)/2-1]) {
   for (int i = ((n-1)/2); i < n; i++){
    newNODE.lNODE.keys[i-(((n-1)/2)+1)] = dividedNODE.lNODE.keys[i];
    newNODE.lNODE.ptr[i+1-(((n-1)/2)+1)] = dividedNODE.lNODE.ptr[i+1];
   }
   dividedNODE.lNODE.keys[(n-1)/2] = key;
   dividedNODE.lNODE.ptr[(n-1)/2+1] = address;
  }
  else {
   for (int i = (((n-1)/2)+1); i < n; i++){
    newNODE.lNODE.keys[i-(((n-1)/2)+1)] = dividedNODE.lNODE.keys[i];
    newNODE.lNODE.ptr[i+1-(((n-1)/2)+1)] = dividedNODE.lNODE.ptr[i+1];
   }
   bool K_key_inserted = false;
   K temp1, temp2;
   block* address1;
   block* address2;
   for (int i = 0; i<((n-1)/2); i++)
    if (!K_key_inserted) {
     if (key < dividedNODE.lNODE.keys[i]) {
      temp1 = dividedNODE.lNODE.keys[i];
      addess1 = dividedNODE.lNODE.ptr[i+1];
      dividedNODE.lNODE.keys[i] = key;
      dividedNODE.lNODE.ptr[i+1] = address;
      K_key_inserted = true;
     }
    }
    else {
     temp2 = dividedNODE.lNODE.keys[i];
     address2 = dividedNODE.lNODE.keys[i+1];
     dividedNODE.lNODE.keys[i] = temp1;
     dividedNODE.lNODE.ptr[i+1] = address1;
     temp1 = temp2;
     address1 = address2;
    }
   dividedNODE.lNODE.keys[(n-1)/2] = temp1;
   dividedNODE.lNODE.ptr[(n-1)/2+1] = address1;
   address1 = -1;
   address2 = -1;
  }
 }
 else {
  bool K_key_inserted = false;
  K temp1, temp2;
  block* address1;
  block* address2;
  for (int i = (((n-1)/2)+1); i < n; i++) {
   if (!K_key_inserted){
    if (key < dividedNODE.lNODE.keys[i]) {
     temp1 = dividedNODE.lNODE.keys[i];
     addess1 = dividedNODE.lNODE.ptr[i+1];
     newNODE.lNODE.keys[i-(((n-1)/2)+1)] = key;
     newNODE.lNODE.ptr[i+1-(((n-1)/2)+1)] = address;
     K_key_inserted = true;
    }
    else {
     newNODE.lNODE.keys[i-(((n-1)/2)+1)] = dividedNODE.lNODE.keys[i];
     newNODE.lNODE.ptr[i+1-(((n-1)/2)+1)] = dividedNODE.lNODE.ptr[i+1];
    }
   }
   else {
    temp2 = dividedNODE.lNODE.keys[i];
    address2 = dividedNODE.lNODE.keys[i+1];
    newNODE.lNODE.keys[i-(((n-1)/2)+1)] = temp1;
    newNODE.lNODE.ptr[i+1-(((n-1)/2)+1)] = address1;
    temp1 = temp2;
    address1 = address2;
   }
  }
  if (!K_key_inserted) {
   newNODE.lNODE.keys[(n-1)/2] = key;
   newNODE.lNODE.ptr[(n-1)/2+1] = address;
  }
  address1 = -1;
  address2 = -1;
 }
 promoted = newNODE.lNODE.keys[0];
 dividedNODE.lNODE.counter = ((n-1)/2)+1;
 newNODE.lNODE.counter = n-(((n-1)/2)+1);
 newNODE.lNODE.ptr[0] = dividedNODE.lNODE.ptr[0];
 dividedNODE.full = false;
 newNODE.full = false;
 created_node = newNODE;
 dividedNODE.lNODE.ptr[0] = reinterpret_cast<block*>(&created_node);
 newNODE = -1;
 delete newNODE;
}
