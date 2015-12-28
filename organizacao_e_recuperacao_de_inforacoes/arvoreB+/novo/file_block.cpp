#include "file_block.h"

#include <cstring>
#include <iostream>
using namespace std;

ostream &operator<<(ostream &output, const file_block &cad){
    output<<"Iniciais: "<<cad.cadastro.iniciais<<", RA: "<<cad.cadastro.RA<<", RH: "<<cad.cadastro.RH<<", Tipo Sanguineo: "<<cad.cadastro.tipo_sanguineo<<", Curso: "<<cad.cadastro.curso;
    return output;
}


file_block::file_block(char ini[5], int ra, bool rh, char sang, char curs[5]){
  cadastro.RA = ra;
  cadastro.RH = rh;
  cadastro.tipo_sanguineo=sang;
  strcpy(cadastro.iniciais, ini);
  strcpy(cadastro.curso,curs);
}

file_block::~file_block(){
}


/*
*
*Não precisa fazer porque é sobrecarregado por padrão,
*executa copia membro a membro!!
*
const file_block &file_block::&operator=(const file_block &cad){
  cadastro.RA = cad.cadastro.RA;
  cadastro.RH = cad.cadastro.RH;
  cadastro.tipo_sanguineo=cad.cadastro.tipo_sanguineo;
  strcpy(cadastro.iniciais, cad.cadastro.iniciais);
  strcpy(cadastro.curso,cad.cadastro.curso);
}
*/
