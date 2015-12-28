#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "quaternion.h"

double get_value(char* texto){
   double aux;
   cout<<texto;
   cin>>aux;
   cout<<endl;
   return aux;
}

int main(void){
  quaternion n1, n2, aux;
  
  cout<<"Digite os valores de a,b,c,d, do primeiro quaternion na respectiva ordem:"<<endl;

  cin>>n1;
  cout<<n1<<endl;  
  cout<<"Digite os valores de a,b,c,d, do segundo quaternion na respectiva ordem:"<<endl; 
  cin>>n2;
  cout<<n2<<endl;
 
  cout<<"Resultados: "<<endl<<endl;

  if (n1>n2){
    cout<<"O primeiro quaternion � maior"<<endl;
  } else {
    cout<<"O segundo quaternion � maior"<<endl;
  };
  aux=n1+n2;
  cout<<"A soma de n1+n2 �:        "<<aux<<endl;
  aux=n1-n2;
  cout<<"A subtra��o n1-n2 �:      "<<aux<<endl; 
  aux=n1*n2;
  cout<<"A multiplica��o n1*n2 �:  "<<aux<<endl;
  aux=n1/n2;
  cout<<"A divis�o n1/n2 �:        "<<aux<<endl;
  if (n1>n2){
    cout<<"O primeiro quaternion � maior"<<endl;
  } else {
    cout<<"O segundo quaternion � maior"<<endl;
  };
  
  aux=n1;
  aux+=n1;
  cout<<"O valor da coma n1+=n1 �: "<<aux<<endl;

  aux=n1;
  aux-=n1;
  cout<<"O valor da coma n1+=n1 �: "<<aux<<endl;

  aux=n1;
  aux*=n1;
  cout<<"O valor da coma n1*=n1 �: "<<aux<<endl;

  aux=n1;
  aux/=n1;
  cout<<"O valor da coma n1/=n1 �: "<<aux<<endl;


  return 0;
}
