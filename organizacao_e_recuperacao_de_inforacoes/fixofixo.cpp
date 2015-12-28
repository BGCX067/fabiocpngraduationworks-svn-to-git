/*Organização e Recuperação da Informação
Manipulação de Registros em Arquivo
Registros e Campos de Tamanho Fixo*/

#include <iostream>
#include <fstream>

using namespace std;

class Pessoa
{
      private:
              char *key;  //A chave possui 4 dígitos  
              char *lastname;
              char *firstname;
              char *address;
              char *city;
              char *state;  //Formato ST
              char *zip;  //Formato 13565-000
              char *phone;  //Formato 16-8888-3456
      public: 
              Pessoa();            
              Pessoa( char[], char[], char[], char[], char[], char[], char[], char[] );
              ~Pessoa();
              char *getkey();
              char *getlastname();
              char *getfirstname();
              char *getaddress();
              char *getcity();
              char *getstate();
              char *getzip();
              char *getphone();
};

Pessoa::Pessoa(){}

Pessoa::Pessoa( char chave[], char ultNome[], char primNome[], char endereco[], char cidade[], char estado[], char cep[], char telefone[])
{
              key = chave;
              lastname = ultNome;
              firstname = primNome;
              address = endereco;
              city = cidade;
              state = estado;
              zip = cep;
              phone = telefone;
}

Pessoa::~Pessoa()
{
                 delete key;
                 delete lastname;
                 delete firstname;
                 delete address;
                 delete city;
                 delete state;
                 delete zip;
                 delete phone;
}

char * Pessoa::getkey()
{
     return key;
}

char * Pessoa::getlastname()
{
     return lastname;
}

char * Pessoa::getfirstname()
{
     return  firstname;
}

char * Pessoa::getaddress()
{
     return address;
}

char * Pessoa::getcity()
{
     return city;
}

char * Pessoa::getstate()
{
     return state;
}

char * Pessoa::getzip()
{
     return zip;
}

char * Pessoa::getphone()
{
     return phone;
}

void gravaRegistro( Pessoa p)
{
     ofstream arquivo( "regs.dat", ios::app );
       
    if (! arquivo )
     {
           cerr << "Arquivo nao pode ser aberto. Programa abortado\n";
           system( "Pause");
           exit(1);         //Aborta a execução em caso de erro na abertura do arquivo
     }
     
     arquivo.write( reinterpret_cast< const char * > ( &p ), sizeof( Pessoa ));
     arquivo.close();
}

void leRegistro()
{
     Pessoa p;
     ifstream arquivo( "regs.dat", ios::in );

    if (! arquivo )
     {
           cerr << "Arquivo nao pode ser aberto. Programa abortado\n";
           system( "Pause");
           exit(1);         //Aborta a execução em caso de erro na abertura do arquivo
     }
     
     arquivo.read( reinterpret_cast< char * > ( &p ), sizeof( Pessoa ));
     cout << p.getkey() << endl << p.getfirstname();
     arquivo.close();
}

void pegaDados()
{
     char chave[ 5 ], nome[ 15 ], 
          sobrenome[ 15 ], endereco[ 35 ], cidade[ 15 ], 
          estado[ 15 ], cep[ 10 ], telefone[ 13 ];    

     
     cout << "Chave: ";
     cin.getline( chave, 5);
     cin.ignore();


     cout << "Nome: ";
     cin.getline( nome, 15 );
     cin.ignore();     

     cout << "Sobrenome: ";
     cin.getline( sobrenome, 15 );
     cin.ignore();
     cout << "Endereco: ";
     cin.getline( endereco, 35 );
     cin.ignore();
     
     cout << "Cidade: ";
     cin.getline( cidade, 14 );
     cin.ignore();
     
     cout << "Estado: ";     
     cin.getline( estado, 14 );
     cin.ignore();
     
     cout << "CEP: ";
     cin.getline( cep, 9 );
     cin.ignore();
     
     cout << "Telefone: ";
     cin.getline( telefone, 12 );
     cin.ignore();

     Pessoa p( chave, sobrenome, nome, endereco, cidade, estado, cep, telefone );
     gravaRegistro( p );

}

int main()
{
    fstream arquivo( ¨regs.dat¨, ios::in|ios::out );
    arquivo.close();
    pegaDados();
    leRegistro();
    system( "pause" );
    return 0;
}
