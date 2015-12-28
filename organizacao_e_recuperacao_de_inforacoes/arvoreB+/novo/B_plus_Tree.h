#ifndef B_plus_Tree_h
#define B_plus_Tree_h
#define block_size 4096
#include "node.h"
#include "file_block.h"

template <class K>
class B_plus_Tree {
 public:
  B_plus_Tree(char* filename const);
  ~B_plus_Tree();
  void insert(K key, block* address);
  bool find(K key, block* address);
  void print_IN_ORDER();
  void print_PRE_ORDER();
 private:
  node<K>* R;
  int level;
  void insertAtRoot(K key,block* address);
  void IN_ORDER_helper(node<K>* ptr);
  void PRE_ORDER_helper(node<K>* ptr);
};

#endif
