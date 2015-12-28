//internal_node.cpp
#include <iostream>
#include <cassert>
#include <fstream>
#include <cstdlib>
#define block_size 4096
#include "node.h"
#include "file_block.h"
#include "internal_node.h"
using namespace std;

template <class K>
internal_node<K>::internal_node() {
 type = 1;
 iNODE.counter = 0;
 for (int i = 0; i<(1+(block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))); i++)
  iNODE.ptr[i] = -1;
}

template <class K>
internal_node<K>::~internal_node() {
 // VERIFICAÇÃO QUE INCLUI DELEÇÃO DO RESPECTIVO BLOCO NO HD
}

template <class K>
bool internal_node<K>::insert(node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node){
 int order = 1+(block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*));
 //ABRE O NÓ
 int pos;
 bool search = current_node.binarySearch(current_node.iNODE.keys,current_node.iNODE.counter,key,pos);
 if(current_node.iNODE.ptr[pos+1].type){
  internal_node<K>* created_node;
  assert(created_node!=0);
  created_node = new internal_node;
 }
 else {
  leaf_node<K>* created_node;
  assert(created_node!=0);
  created_node = new leaf_node;
 }
 if (current_node.iNODE.ptr[pos+1].insert(current_node.iNODE.ptr[pos+1],key,address,divided,promoted,created_node)){
  if (divided){
   current_node.modified = true;
   if (!current_node.full){
    if (promoted > current_node.iNODE.keys[current_node.iNODE.counter-1]) {
     current_node.iNODE.keys[current_node.iNODE.counter] = promoted;
     current_node.iNODE.ptr[current_node.iNODE.counter+1] = created_node;
    }
    else {
     search = binarySearch(current_node.iNODE.keys,current_node.iNODE.counter,key,pos);
     K temp_key1, temp_key2;
     node<K>* temp_address1;
     node<K>* temp_address2;
     temp_key1 = current_node.iNODE.keys[pos+1];
     temp_address1 = current_node.iNODE.ptr[pos+2];
     current_node.iNODE.keys[pos+1] = promoted;
     current_node.iNODE.ptr[pos+2] = created_node;
     for (int i = pos+2; i < current_node.iNODE.counter; i++){
      temp_key2 =  current_node.iNODE.keys[i];
      temp_address2 = current_node.iNODE.ptr[i+1];
      current_node.iNODE.keys[i] = temp_key1;
      current_node.iNODE.ptr[i+1] = temp_address2;
      temp_key1 = temp_key2;
      temp_address1 = temp_address2;
     }
     current_node.iNODE.keys[current_node.iNODE.counter] = temp_key1;
     current_node.iNODE.ptr[current_node.iNODE.counter+1] = temp_address1;
     temp_address1 = -1;
     temp_address2 = -1;
     delete temp_address1;
     delete temp_address2;
    }
    current_node.iNODE.counter++;
    if (current_node.iNODE.counter == order-1)
     current_node.full = true;
    divided = false;
    //FECHA O NÓ
   }
   else {
    internal_node<K>* created_node;
    assert(created_node!=0);
    created_node = new internal_node;
    search = current_node.binarySearch(current_node.iNODE.keys,current_node.iNODE.counter,key,pos);
    divide(key,current_node.iNODE.ptr[pos+1],promoted,current_node,created_node);
    //GRAVAÇÃO DOS DOIS NÓS NO HD!
   }
  }
  else
   delete created_node;
  return true;
 }
 return false;
}

template <class K>
bool internal_node<K>::find (node<K>* current_node, K key, block* address){
 // ABRIR NÓ PARA LEITURA DO HD
 int key_array_size =  block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*);
 int pos;
 bool search = binarySearch(current_node.iNODE.keys,key_array_size,pos);
 //FECHAR NÓ
 return (find(current_node.iNODE.ptr[pos+1],key,address));
}

template <class K>
void internal_node<K>::print(node<K>* current_node){
 // ABRIR NÓ PARA LEITURA DO HD
 for (int i = 0; i < (block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*)); i++)
  cout<<iNODE.keys[i]<<" ";
 cout<<" ";
 //FECHAR NÓ
} 

template <class K>
void internal_node<K>::divide(K key, block* address, K promoted, node<K>* divided_node, node<K>* created_node){
 int n = 1+(block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*));
 internal_node<K>* newNODE;
 assert(newNODE!=0);
 newNODE = new internal_node;
 if ((K < dividedNODE.iNODE.keys[n/2])&&(K > dividedNODE.iNODE.keys[n/2-1])) {
  promoted = key;
  for (int i = n/2; i < n; i++ ) {
   newNODE.iNODE.keys[i-(n/2)] = dividedNODE.iNODE.keys[i];
   newNODE.iNODE.ptr[i+1-(n/2)] = dividedNODE.iNODE.ptr[i+1];
  }
  newNODE.iNODE.ptr[0] = dividedNODE.iNODE.ptr[n/2];
 }
 else {
  if (K < dividedNODE.iNODE.keys[(n/2)-1]) {
   promoted = dividedNODE.iNODE.keys[(n/2)-1];
   for (int i = (n/2); i < n; i++){
    newNODE.iNODE.keys[i-(n/2)] = dividedNODE.iNODE.keys[i];
    newNODE.iNODE.ptr[i+1-(n/2)] = dividedNODE.iNODE.ptr[i+1];
   }
   newNODE.iNODE.ptr[0] = newNODE.iNODE.ptr[(n/2)+1];
   bool K_key_inserted = false;
   K temp1, temp2;
   node<K>* address1;
   node<K>* address2;
   for (int i = 0; i < (n/2)-1; i++) {
    if (!K_key_inserted) {
     if (K < dividedNODE.iNODE.keys[i]) {
      temp1 = dividedNODE.iNODE.keys[i];
      address1 = dividedNODE.iNODE.ptr[i+1];
      dividedNODE.iNODE.keys[i] = key;
      dividedNODE.iNODE.ptr[i+1] = reinterpret_cast<node<K>*>(&address);
      K_key_inserted = true;
     }
    }
    else {
     temp2 = dividedNODE.iNODE.keys[i];
     address2 = dividedNODE.iNODE.ptr[i+1];
     dividedNODE.iNODE.keys[i] = temp1;
     dividedNODE.iNODE.ptr[i+1] = address1;
     temp1 = temp2;
     address1 = address2;
    }
   }
   dividedNODE.iNODE.keys[(n-2)-1] = temp1;
   dividedNODE.iNODE.ptr[(n-2)] = address1;
   address1 = -1;
   address2 = -1;
  }
  else {
   promoted = dividedNODE.iNODE.keys[n/2];
   bool K_key_inserted = false;
   K temp1, temp2;
   node<K>* address1;
   node<K>* address2;
   for (int i = (n/2)+1; i < n-1; i++){
    if (!K_key_inserted){
     if (K < dividedNODE.iNODE.keys[i]) {
      temp1 = dividedNODE.iNODE.keys[i];
      address1 = dividedNODE.iNODE.ptr[i+1];
      newNODE.iNODE.keys[i-((n/2)+1)] = key;
      newNODE.iNODE.ptr[i+1-((n/2)+1)] = reinterpret_cast<node<K>*>(&address);
      K_key_inserted = true;
     }
     else {
      newNODE.iNODE.keys[i-((n/2)+1)] = dividedNODE.iNODE.keys[i];
      newNODE.iNODE.ptr[i+1-((n/2)+1)] = dividedNODE.iNODE.ptr[i+1];
     }
    }
    else {
     temp2 = dividedNODE.iNODE.keys[i];
     address2 = dividedNODE.iNODE.ptr[i+1];
     newNODE.iNODE.keys[i-((n/2)+1)] = temp1;
     newNODE.iNODE.ptr[i+1-((n/2)+1)] = address1;
     temp1 = temp2;
     address1 = address2;
    }
   }
   if (!K_key_inserted) {
    newNODE.iNODE.keys[n-(n/2)] = key;
    newNODE.iNODE.ptr[n+1-(n/2)] = reinterpret_cast<node<K>*>(&address);
   }
   newNODE.iNODE.ptr[0] = dividedNODE.iNODE.ptr[(n/2)+1];
   address1 = -1;
   address2 = -1;
  }
 }
 newNODE.iNODE.counter = n - (n/2);
 dividedNODE.iNODE.counter = n/2;
 newNODE.full = false;
 dividedNODE.full = false;
 created_node = newNODE;
 newNODE = -1;
 delete newNODE;
}
