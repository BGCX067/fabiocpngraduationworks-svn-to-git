#ifndef internal_node_h
#define internal_node_h
#define block_size 4096
#include <cstdlib>
#include "node.h"
#include "file_block.h"

template <class K>
class internal_node : public node {
 public:
  internal_node();
  virtual ~internal_node();
  virtual bool insert (node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node);
  virtual bool find (node<K>* current_node,K key, block* address);
  virtual void print(node<K>* current_node);
 private:
  struct i_node{
   int counter;
   K keys[(block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))];
   node<K>* ptr[1+(block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))];
   bool NA[block_size-(sizeof(int)+sizeof(node<K>*)+(sizeof(K)+sizeof(node<K>*))*((block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))))];
  };
  i_node iNODE;
  virtual void divide (K key, block* address, K promoted, node<K>* divided_node, node<K>* created_node); //essa função deixa a abertura e fechamento dos nós por conta da função insert
};

#endif
