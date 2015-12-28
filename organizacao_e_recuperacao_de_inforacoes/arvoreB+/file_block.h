#ifndef file_block_h
#define file_block_h
#define block_size 4096

struct cadastro{
 char iniciais[5];
 int RA;
 bool RH;
 char tipo_sanguineo;
 char curso[5];
};

struct block{
 cadastro* data[block_size/(sizeof(cadastro*) + sizeof(bool))];
 bool set[block_size/(sizeof(cadastro*) + sizeof(bool))];
 bool NA[block_size - (sizeof(cadastro*)+sizeof(bool))*(block_size/(sizeof(cadastro*) + sizeof(bool)))];
};

#endif
