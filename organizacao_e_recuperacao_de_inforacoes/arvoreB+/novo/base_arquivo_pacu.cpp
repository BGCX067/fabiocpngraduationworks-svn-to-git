#include <iostream>
using namespace std;

#include <fstream>
#include <cstdlib>
//Include do bloco...
//#include "node.h" ?

int escrever(int pos, node aux, char* arquivo){
	ofstream o_arquivo(arquivo, ios::binary);
	
	if (!o_arquivo){
		cerr<<"Arquivo não pode ser aberto!"<<endl;
		exit(1);
	}
	
	//Posiciona e Escreve.
	variaveldoarquivo.seekp((pos)*sizeof(node));
	variaveldoarquivo.write(reinterpret_cast<char*>(&aux),sizeof(node));
	
	return 0;	
}

node ler(char* arquivo, unsigned long pos){

	ifstream i_arquivo(arquivo, ios::in);
	if (!i_arquivo){
		cerr<<"Arquivo não pode ser aberto!"<<endl;
		exit(1);
	}

	node aux;
	
	//Posiciona e Escreve.
	//Posiciona em posicao*(tamanho do nó)
	i_arquivo.seekg((pos)*sizeof(node));
	//Lê do arquivo convertendo char* para node.
	i_arquivo.read(reinterpret_cast<char*>(&aux),sizeof(node));
	
	return aux;
}

/*   
 *    Fazer com template!!!
 *    
 */  
  