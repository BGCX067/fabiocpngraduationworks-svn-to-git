#ifndef file_block_h
#define file_block_h
#define block_size 4096

#include <iostream>
using namespace std;

class file_block{
	friend ostream &operator<<(ostream &, const file_block &);

    private:	
	struct registro{
	    char iniciais[5];
	    int RA;
	    bool RH;
	    char tipo_sanguineo;
	    char curso[5];
	};
	registro cadastro;
    public:
	struct block{
	    registro* data[block_size/(sizeof(registro*) + sizeof(bool))];
	    bool set[block_size/(sizeof(registro*) + sizeof(bool))];
	    bool NA[block_size - (sizeof(registro*)+sizeof(bool))*(block_size/(sizeof(registro*) + sizeof(bool)))];
	};
	file_block(char[5], int, bool, char, char[5]);
	~file_block();
//	const file_block &operator=(const file_block &);
};


#endif

