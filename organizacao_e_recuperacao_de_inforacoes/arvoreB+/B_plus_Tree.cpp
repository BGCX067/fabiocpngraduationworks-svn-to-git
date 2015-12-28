//B_plus_Tree.cpp

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
