#include <iostream>
using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

#include "quaternion.h"
#include <cstdlib>

quaternion::quaternion(){}

quaternion::quaternion(double da, double db, double dc, double dd){
  a=da;
  b=db;
  c=dc;
  d=dd;
} 

const double quaternion::geta(){
  return a;
}

const double quaternion::getb(){
  return b;
}

const double quaternion::getc(){
  return c;
}

const double quaternion::getd(){
  return d;
}

void quaternion::seta(double da){
  a=da;
}

void quaternion::setb(double db){
  b=db;
}

void quaternion::setc(double dc){
  c=dc;
}

void quaternion::setd(double dd){
  d=dd;
}

quaternion quaternion::operator+(const quaternion& op2){
  quaternion temp;
      temp.seta(a+op2.a); 
      temp.setb(b+op2.b);
      temp.setc(c+op2.c);
      temp.setd(d+op2.d);
  return temp;
}

quaternion quaternion::operator-(const quaternion& op2){
  quaternion temp;
    temp.seta(a-op2.a);
    temp.setb(b-op2.b);
    temp.setc(c-op2.c);
    temp.setd(d-op2.d);
  return temp;
}

quaternion quaternion::operator*(const quaternion& op2){
  quaternion temp;
     temp.seta(a*op2.a - b*op2.b - c*op2.c - d*op2.d);
     temp.setb(a*op2.b + b*op2.a + c*op2.d - d*op2.c);
     temp.setc(a*op2.c + c*op2.a + d*op2.b - b*op2.d);
     temp.setd(a*op2.d + d*op2.a + b*op2.c - c*op2.b);
  return temp;
}

quaternion quaternion::operator/(const quaternion& op2){
 quaternion temp;
 
 temp.seta((a*op2.a + b*op2.b + c*op2.c + d*op2.d)/(a*a+b*b+c*c+d*d));
 temp.setb((a*op2.b - b*op2.a - c*op2.c + d*op2.c)/(a*a+b*b+c*c+d*d));
 temp.setc((a*op2.c + b*op2.d - c*op2.a - d*op2.b)/(a*a+b*b+c*c+d*d));
 temp.setd((a*op2.d - b*op2.c + c*op2.b - d*op2.a)/(a*a+b*b+c*c+d*d));
 return temp;
}

bool quaternion::operator<(const quaternion& op2){
  return ( a*a+b*b+c*c+d*d < op2.a*op2.a + op2.b*op2.b + op2.c*op2.c + op2.d*op2.d );
}

bool quaternion::operator>(const quaternion& op2){
  return ( a*a+b*b+c*c+d*d > op2.a*op2.a + op2.b*op2.b + op2.c*op2.c + op2.d*op2.d );
}


quaternion &quaternion::operator+=(const quaternion& op2){
  a+=op2.a;
  b+=op2.b;
  c+=op2.c;
  d+=op2.d;
  return *this;
}

quaternion &quaternion::operator-=(const quaternion& op2){
 a-=op2.a;
 b-=op2.b;
 c-=op2.c;
 d-=op2.d;
 return *this;
}

quaternion &quaternion::operator*=(const quaternion& op2){
  a=a*op2.a - b*op2.b - c*op2.c - d*op2.d;
  b=a*op2.b + b*op2.a + c*op2.d - d*op2.c;
  c=a*op2.c + c*op2.a + d*op2.b - b*op2.d;
  d=a*op2.d + d*op2.a + b*op2.c - c*op2.b; 
  return *this;
}

quaternion &quaternion::operator/=(const quaternion& op2){
 a=((a*op2.a + b*op2.b + c*op2.c + d*op2.d)/(a*a+b*b+c*c+d*d));
 b=((a*op2.b - b*op2.a - c*op2.c + d*op2.c)/(a*a+b*b+c*c+d*d));
 c=((a*op2.c + b*op2.d - c*op2.a - d*op2.b)/(a*a+b*b+c*c+d*d));
 d=((a*op2.d - b*op2.c + c*op2.b - d*op2.a)/(a*a+b*b+c*c+d*d));
 return *this;
}

istream &operator>>(istream& input, quaternion& quater){
  double aux;
  char temp[100];
  //Se a conversão de char para float não for válida, joga valor para 0.
  cin.getline(temp, 100);
  aux=strtof(temp,0);
  quater.seta(aux);

  cin.getline(temp, 100);
  aux=strtof(temp,0);
  quater.setb(aux);

  cin.getline(temp, 100);
  aux=strtof(temp,0);
  quater.setc(aux);

  cin.getline(temp, 100);
  aux=strtof(temp,0);
  quater.setd(aux);
}

ostream &operator<<(ostream& saida, quaternion& quater){
  saida<<quater.geta()<<" +("<<quater.getb()<<")*i +("<<quater.getc()<<")*j +("<<quater.getd()<<")*k";
  return saida;
}


