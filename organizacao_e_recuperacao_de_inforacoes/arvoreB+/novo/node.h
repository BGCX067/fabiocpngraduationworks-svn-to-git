#ifndef node_h
#define node_h
#include "file_block.h"

template <class K> class B_plus_Tree;

template <class K>
class node{
  friend class B_plus_Tree<K>;
 public:
  node(bool set_type = false, unsigned int set_number = -1);
  ~node();
  bool insert(node<K>* current_node, K key, block* address, bool divided, K promoted, node<K>* created_node);
  bool find(node<K>* current_node, K key, block* address) const;
  void print_keys() const;
 protected:
  void divide(K key, block* address, K promoted, node<K>* created_node); // Alterar a criação do bloco nó, para inserir o número do respectivo bloco
  bool isFull() const;
  void setFull(bool is_or_not_is);
  bool getType() const;
  K getKEY(int position) const;
  void setKEY(int position, K key);
  void setPTR(int position, node<K>* ptr);
  K* getKEYS();
  node<K>* getPTR(int position) const;
  int getCounter() const;
  void setCounter(int value);
  void setModified(bool is_or_not_is);
  bool modified;
  bool full;
  bool binarySearch(K* keys, int size, K key, int position) const;
  struct NODE{
   unsigned int number;
   int counter;
   bool type;
   K keys[(block_size-(sizeof(unsigned int)+sizeof(bool)+sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))];
   node<K>* ptr[1+(block_size-(sizeof(unsigned int)+sizeof(bool)+sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))];
   bool NA[block_size-(sizeof(unsigned int)+sizeof(bool)+sizeof(int)+sizeof(node<K>*)+(sizeof(K)+sizeof(node<K>*))*((block_size-(sizeof(int)+sizeof(node<K>*)))/(sizeof(K)+sizeof(node<K>*))))];
  };
  NODE node_block;
  
};

#endif
