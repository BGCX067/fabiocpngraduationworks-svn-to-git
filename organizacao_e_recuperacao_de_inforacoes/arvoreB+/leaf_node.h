#ifndef leaf_node_h
#define leaf_node_h
#define block_size 4096
#include "node.h"
#include "file_block.h"

template <class K>
class leaf_node : public node {
 public:
  leaf_node();
  virtual ~leaf_node();
  virtual bool insert (node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node);
  virtual bool find (node<K>* current_node, K key, block* address);
  virtual void print(node<K>* current_node);
 private:
  struct l_node{
   int counter;
   K keys[(block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*))];
   node<K>* ptr[1+(block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*))];
   bool NA[block_size-(sizeof(int)+sizeof(block*)+(sizeof(K)+sizeof(block*))*((block_size-(sizeof(int)+sizeof(block*)))/(sizeof(K)+sizeof(block*))))];
  };
  l_node lNODE;
  virtual void divide (K key, block* address, K promoted, node<K>* divided_node, node<K>* created_node); //essa função deixa a abertura e fechamento dos nós por conta da função insert
};

#endif
