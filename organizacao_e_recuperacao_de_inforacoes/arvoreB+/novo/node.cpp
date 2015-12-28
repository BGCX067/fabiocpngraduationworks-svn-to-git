//node.cpp
#include <cstdlib>
#include <iostream>
#include "file_block.h"
#include "node.h"

template <class K>
node<K>::node(bool set_type, unsigned int set_number){
 *this.node_block.type = set_type; // onde type = 0 é folha e type = 1 é interno
 *this.node_block.number = set_number;
 *this.setModified(true);
 *this.setFull(false);
 *this.setCounter(0);
 for (int i = 0; i<(1+(block_size-(sizeof(bool)+sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))); i++)
  *this.setPTR(i,-1);
}

template <class K>
node<K>::~node<K>(){
 delete modified;
 delete full;
 // complementar com mais coisas
}

template <class K>
bool node<K>::insert(node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node){
 int order = 1+(block_size-(sizeof(bool)+sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*));
 if (current_node.getType()) {
  int pos;
  bool search = current_node.binarySearch(current_node.getKEYS(),current_node.getCounter(),key,pos);
  if (current_node.insert(current_node.getPTR(pos+1),key,address,divided,promoted,created_node)){
   if (divided){
    current_node.setModified(true);
    if (!current_node.isFull()){
     if (promoted > current_node.getKEY(current_node,current_node.getCounter()-1)) {
      current_node.setKEY(current_node,current_node.getCounter(),promoted);
      current_node.setPTR(current_node,current_node.getCounter()+1,created_node);
     }
     else {
      search = binarySearch(current_node.getKEYS(),current_node.getCounter(),key,pos);
      K temp_key1, temp_key2;
      node<K>* temp_address1;
      node<K>* temp_address2;
      temp_key1 = current_node.getKEY(pos+1);
      temp_address1 = current_node.getPTR(pos+2);
      current_node.setKEY(pos+1,promoted);
      current_node.setPTR(pos+2,created_node);
      for (int i = pos+2; i < current_node.getCounter() + 1; i++){
       temp_key2 =  current_node.getKEY(i);
       temp_address2 = current_node.getPTR(i+1);
       current_node.setKEY(i,temp_key1);
       current_node.setPTR(i+1,temp_address1);
       temp_key1 = temp_key2;
       temp_address1 = temp_address2;
      }
      temp_address1 = -1;
      temp_address2 = -1;
     }
     current_node.setCounter(current_node.getCounter()+1);
     if (current_node.getCounter() == order-1)
      current_node.setFull(true);
     divided = false;
     //FECHA O NÓ
    }
    else {
     search = current_node.binarySearch(current_node.getKEYS(),current_node.getCounter(),key,pos);
     current_node.divide(promoted,reinterpret_cast<block*>(current_node.getPTR(pos+1)),promoted,current_node,created_node);
     //GRAVAÇÃO DOS DOIS NÓS NO HD!
    }
   }
   return true;
  }
  return false;
 }
 else {
  if(current_node.find(current_node,key,address)) {
   //FECHA O NÓ
   return false; // duplicata
  }
  else{
   if (!current_node.isFull()) {
    if (key > current_node.getKEY(current_node.getCounter()-1)) {
     current_node.setKEY(current_node.getCounter(),key);
     current_node.setPTR(current_node.getCounter()+1,address);
    }
    else {
     int pos;
     bool search = binarySearch(current_node.getKEYS(),current_node.getCounter(),key,pos);
     K temp_key1, temp_key2;
     node* temp_address1;
     node* temp_address2;
     temp_key1 = current_node.getKEY(pos+1);
     temp_address1 = current_node.getPTR(pos+2);
     current_node.setKEY(pos+1,key);
     current_node.setPTR(pos+2,reinterpret_cast<node*>(&address));
     for (int i = pos+2; i < current_node.getCounter()+1; i++){
      temp_key2 = current_node.getKEY(i);
      temp_address2 = current_node.getPTR(i+1);
      current_node.setKEY(i,temp_key1);
      current_node.setPTR(i+1,temp_address2);
      temp_key1 = temp_key2;
      temp_address1 = temp_address2;
     }
     temp_address1 = -1;
     temp_address2 = -1;
    }
    current_node.setCounter(current_node.getCounter()+1);
    if (current_node.getCounter() == order-1)
     current_node.setFull(true);
    divided = false;
    //FECHA O NÓ
    return true;
   }
   else {
    node<K>* created_node;
    current_node.divide(key,address,promoted,current_node,created_node);
    //GRAVAÇÃO DOS DOIS NÓS NO HD!
    return true;
   }
  }
 }
}

template <class K>
bool node<K>::find (node<K>* current_node, K key, block* address) const{
 int pos;
 bool search = binarySearch(current_node.getKEYS(),current_node.getCounter(),pos);
 if (current_node.getType())
  current_node = current_node.getPTR(pos+1);
 else
  if (search)
   address = reinterpret_cast<block*> (&(current_node.getPTR(pos+1)));
 return search;
}

template <class K>
void node<K>::print_keys() const{
 // ABRIR NÓ PARA LEITURA DO HD
 for (int i = 0; i < *this.getCounter() ; i++)
  cout<<*this.getKEY(i)<<" ";
 cout<<" ";
 //FECHAR NÓ
}

template <class K>
void node<K>::divide(K key, block* address, K promoted, node<K>* created_node){
 int n = 1+(block_size-(sizeof(bool)+sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*));
 node<K>* newNODE;
 assert(newNODE!=0);
 newNODE = new node(*this.getType());
 if (*this.getType()) {
  if ((key < *this.getKEY(n/2))&&(key > *this.getKEY(n/2-1))) {
   promoted = key;
   for (int i = n/2; i < n; i++ ) {
    newNODE.setKEY(i-(n/2),*this.getKEY(i));
    newNODE.setPTR(i+1-(n/2),*this.getPTR(i+1));
   }
   newNODE.setPTR(0,*this.getPTR(n/2));
  }
  else {
   if (key < *this.getKEY((n/2)-1)) {
    promoted = *this.getKEY((n/2)-1);
    for (int i = (n/2); i < n; i++){
     newNODE.setKEY(i-(n/2),*this.getKEY(i));
     newNODE.setPTR(i+1-(n/2),*this.gePTR(i+1));
    }
    newNODE.setPTR(0,*this.getPTR((n/2)+1));
    bool K_key_inserted = false;
    K temp1, temp2;
    node<K>* address1;
    node<K>* address2;
    for (int i = 0; i < n/2; i++) {
     if (!K_key_inserted) {
      if (key < *this.getKEY(i)) {
       temp1 = *this.getKEY(i);
       address1 = *this.getPTR(i+1);
       *this.setKEY(i) = key;
       *this.setPTR(i+1) = reinterpret_cast<node<K>*>(&address);
       K_key_inserted = true;
      }
     }
     else {
      temp2 = *this.getKEY(i);
      address2 = *this.getPTR(i+1);
      *this.setKEY(i,temp1);
      *this.setPTR(i+1,address1);
      temp1 = temp2;
      address1 = address2;
     }
    }
    address1 = -1;
    address2 = -1;
   }
   else {
    promoted = *this.getKEY(n/2);
    bool K_key_inserted = false;
    K temp1, temp2;
    node<K>* address1;
    node<K>* address2;
    for (int i = (n/2)+1; i < n; i++){
     if (!K_key_inserted){
      if (key < *this.getKEY(i)) {
       temp1 = *this.getKEY(i);
       address1 = *this.getPTR(i+1);
       newNODE.setKEY(i-((n/2)+1),key);
       newNODE.setPTR(i+1-((n/2)+1),reinterpret_cast<node<K>*>(&address));
       K_key_inserted = true;
      }
      else {
       newNODE.setKEY(i-((n/2)+1),*this.getKEY(i));
       newNODE.setPTR(i+1-((n/2)+1),*this.getPTR(i+1));
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
     newNODE.setKEY(n-(n/2),key);
     newNODE.setPTR(n+1-(n/2),reinterpret_cast<node<K>*>(&address));
    }
    newNODE.setPTR(0,*this.getPTR((n/2)+1));
    address1 = -1;
    address2 = -1;
   }
  }
  newNODE.setCounter(n-(n/2));
  *this.setCounter(n/2);
 }
 else{
  if (key < *this.getKEY((n-1)/2)) {
   if (key > *this.KEY((n-1)/2-1)) {
    for (int i = (n-1)/2; i < n; i++){
     newNODE.setKEY(i-((n-1)/2)+1,*this.getKEY(i));
     newNODE.setPTR(i+1-(((n-1)/2)+1),*this.getPTR(i+1));
    }
    *this.setKEY((n-1)/2,key);
    *this.getPTR((n-1)/2+1,address);
   }
   else {
    for (int i = (((n-1)/2)+1); i < n; i++){
     newNODE.setKEY(i-(((n-1)/2)+1),*this.getKEY(i));
     newNODE.setKEY(i+1-(((n-1)/2)+1),*this.getPTR(i+1));
    }
    bool K_key_inserted = false;
    K temp1, temp2;
    block* address1;
    block* address2;
    for (int i = 0; i<(n-1)/2; i++)
     if (!K_key_inserted) {
      if (key < *this.getKEY(i)) {
       temp1 = *this.getKEY(i);
       addess1 = *this.getPTR(i+1);
       *this.setKEY(i,key);
       *this.setPTR(i+1,address);
       K_key_inserted = true;
      }
     }
     else {
      temp2 = *this.getKEY(i);
      address2 = *this.getPTR(i+1);
      *this.setKEY(i,temp1);
      *this.setPTR(i+1,address1);
      temp1 = temp2;
      address1 = address2;
     }
    *this.setKEY((n-1)/2,temp1);
    *this.setPTR((n-1)/2+1,address1);
    address1 = -1;
    address2 = -1;
   }
  }
  else {
   bool K_key_inserted = false;
   K temp1, temp2;
   block* address1;
   block* address2;
   for (int i = ((n-1)/2)+1; i < n; i++) {
    if (!K_key_inserted){
     if (key < *this.getKEY(i)) {
      temp1 = *this.getKEY(i);
      addess1 = *this.getPTR(i+1);
      newNODE.setKEY(i-(((n-1)/2)+1),key);
      newNODE.setPTR(i+1-(((n-1)/2)+1),address);
      K_key_inserted = true;
     }
     else {
      newNODE.setKEY(i-(((n-1)/2)+1),*this.getKEY(i));
      newNODE.setKEY(i+1-(((n-1)/2)+1),*this.getPTR(i+1));
     }
    }
    else {
     temp2 = *this.getKEY(i);
     address2 = *this.getPTR(i+1);
     newNODE.setKEY(i-(((n-1)/2)+1),temp1);
     newNODE.setPTR(i+1-(((n-1)/2)+1),address1);
     temp1 = temp2;
     address1 = address2;
    }
   }
   if (!K_key_inserted) {
    newNODE.setKEY((n-1)/2,key);
    newNODE.setPTR((n-1)/2+1,address);
   }
   address1 = -1;
   address2 = -1;
  }
  promoted = newNODE.getKEY(0);
  *this.setCounter(((n-1)/2)+1);
  newNODE.setCounter(n-(((n-1)/2)+1));
  newNODE.setPTR(0,*this.getPTR(0));
  *this.setPTR(0,created_node);
 }
 *this.setFull(false);
 newNODE.setFull(false);
 created_node = newNODE;
 newNODE = -1;
 delete newNODE;
}

template <class K>
bool node<K>::isFull() const{
 return (*this.node_block.full);
}

template <class K>
void node<K>::setFull(bool is_or_is_not){
 *this.node_block.full = is_or_is_not;
}

template <class K>
bool node<K>::getType() const{
 return (*this.node_block.type);
}

template <class K>
K node<K>::getKEY(int position) const{
 return (*this.node_block.keys[position]);
}

template <class K>
void node<K>::setKEY(int position, K key){
 *this.node_block.keys[position] = key;
}

template <class K>
void node<K>::setPTR(int position, node<K>* ptr){
 *this.node_block.ptr[position] = ptr;
}

template <class K>
K* node<K>::getKEYS() {
 return (*this.node_block.keys);
}

template <class K>
node<K>* node<K>::getPTR(int position) const{
 return (*this.node_block.ptr[position]);
}

template <class K>
int node<K>::getCounter() const{
 return (*this.node_block.counter);
}

template <class K>
void node<K>::setCounter(int value){
 *this.node_block.counter = value;
}

template <class K>
void node<K>::setModified(bool is_or_not_is){
 *this.modified = is_or_is_not;
}

template <class K>
bool node<K>::binarySearch(K* keys, int size, K key, int position) const{
 bool found = false;
 int low = 0;
 int high = size - 1;
 while ((high>=low)&&(!found)) {
  int mid = (low+high)/2;
  if ( key < keys[mid] )
   high = mid - 1;
  else
   if (key > keys[mid])
    low = mid + 1;
   else
    found = true;
 }
 if (found)
  position = mid;
 else
  position = high;
 return found;
}
