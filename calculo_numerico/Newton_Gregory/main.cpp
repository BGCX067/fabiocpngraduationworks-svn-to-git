#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Entre com o número de termos: ";
  cin>>n;

  float dominio[n];
  float dados[n][n];
  
  //
  //Zerando... por desencargo.
  //
  
  for (int i=0;i<=n-1;i++){
    dominio[i]=0;
    for (int j=0;j<=n-1;j++){
      dados[i][j]=0;
    }
  }
      
  float xini;
  cout<<"Entre com o primeiro valor de x: ";
  cin>>xini;
  dominio[0]=xini;  
  
  float h;
  cout<<"Entre com o espaçamento de x: ";
  cin>>h;
    
  //
  // Carrega os valores de 
  //
  
  for (int i=0;i<=n-1;i++){
       cout<<"Valor de y"<<i<<" :";
       cin>>dados[i][0];
       if (i!=0) { dominio[i]=xini+(i*h);}	
  }
  
  //
  // Calculando os valores de Delta_F_
  //
  
  for (int j=1;j<=n-1;j++){
    for (int i=0;i<=(n-1)-j;i++) {
       //Posicao = (coluna ant,linha+1 -   coluna ant,linha) / (x+1          - x);
       dados[i][j]=(dados[i+1][j-1]      -   dados[i][j-1]    ) / (dominio[i+1] - dominio[i]);
    
    }
  }

  float x;
  cout<<"Entre com o valor de x a ser calculado: ";
  cin>>x;

  //
  // Calculo do Valor de F	
  //

  float valorfinal=0;
  
  for (int i=0;i<=n-1;i++){

    //Calculo de (x-x0)(x-x1)...(x-xn)
    float aux=1;
    for (int i2=0;i2<=i-1;i2++){
      aux=aux*(x-dominio[i2]);
    }
        
    //Calculo do fatorial 1*2*3*...*n
    int fato=1;
    for (int i3=2;i3<=i;i3++){
      fato=fato*i3;
    }
    
    //Calculo do valor final da funcao: (x-x0)*delta/h^n+n!
    //Para cada n, o valor total é somado com o já existente
    cout<<endl;
    cout<<"("<<dados[0][i]<<"*"<<aux<<")/("<<pow(h,i)<<"*"<<fato<<")"<<" + ";
    cout<<endl;
    valorfinal=valorfinal+((dados[0][i]*aux)/(pow(h,i)*fato));
  }
  
  cout<<endl<<"f("<<x<<")= "<<valorfinal<<endl;

}
