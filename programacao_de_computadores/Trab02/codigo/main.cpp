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
    cout<<"O primeiro quaternion é maior"<<endl;
  } else {
    cout<<"O segundo quaternion é maior"<<endl;
  };
  aux=n1+n2;
  cout<<"A soma de n1+n2 é:        "<<aux<<endl;
  aux=n1-n2;
  cout<<"A subtração n1-n2 é:      "<<aux<<endl; 
  aux=n1*n2;
  cout<<"A multiplicação n1*n2 é:  "<<aux<<endl;
  aux=n1/n2;
  cout<<"A divisão n1/n2 é:        "<<aux<<endl;
  if (n1>n2){
    cout<<"O primeiro quaternion é maior"<<endl;
  } else {
    cout<<"O segundo quaternion é maior"<<endl;
  };
  
  aux=n1;
  aux+=n1;
  cout<<"O valor da coma n1+=n1 é: "<<aux<<endl;

  aux=n1;
  aux-=n1;
  cout<<"O valor da coma n1+=n1 é: "<<aux<<endl;

  aux=n1;
  aux*=n1;
  cout<<"O valor da coma n1*=n1 é: "<<aux<<endl;

  aux=n1;
  aux/=n1;
  cout<<"O valor da coma n1/=n1 é: "<<aux<<endl;


  return 0;
}
