#ifndef node_h
#define node_h
#include <cstdlib>
#include "file_block.h"

template <class K> class B_plus_Tree;

template <class K>
class node{
  friend class B_plus_Tree<K>;
 public:
  node();
  virtual ~node();
  virtual bool insert (node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node) = 0;
  virtual bool find (node<K>* current_node, K key, block* address) = 0;
  virtual void print(node<K>* current_node) const = 0;
 protected:
  virtual void divide (K key, block* address, K promoted, node<K>* divided_node, node<K>* created_node) = 0;
  bool modified;
  bool full;
  bool binarySearch(K* keys, int size, K key, int position);
  bool type;
};

#endif
