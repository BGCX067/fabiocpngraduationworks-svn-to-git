#ifndef QUATERNION_H
#define QUATERNION_H
#include <iostream>
using std::istream;
using std::ostream;


class quaternion{
  private:
    double a,b,c,d;
  public:
    quaternion();
    quaternion(double,double,double,double);
    const double geta();
    const double getb();
    const double getc();
    const double getd();
    void seta(double);
    void setb(double);
    void setc(double);
    void setd(double);
    
  //SOBRECARGAS!
    quaternion operator+( const quaternion&);
    quaternion operator-( const quaternion&);
    quaternion operator*( const quaternion&);
    quaternion operator/( const quaternion&);
    bool operator>( const quaternion&);
    bool operator<( const quaternion&);
    quaternion &operator+=( const quaternion&); 
    quaternion &operator-=( const quaternion&);
    quaternion &operator*=( const quaternion&);
    quaternion &operator/=( const quaternion&);
};

    istream &operator>>( istream&, quaternion&);
    ostream &operator<<( ostream&, quaternion&);
 
#endif
