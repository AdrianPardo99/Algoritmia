#include <stdio.h>
#include <stdlib.h>
long fact(int ban){return (ban!=1)?(ban*fact(ban-1)):(1);}
double pote(float v,int p){
  int i;
  float sum=0;
  for(i=0;i!=p;i++){
    sum+=v;
  }
  return sum;
}
float divi(float d,float di){return d/di;}
int main(){
  int i;
  float valor,pi=3.1416,grados=180.0,suma=0,radianes,s=0;
  printf("Ingresa el valor en grados\n");
  scanf("%f",&valor);
  radianes=valor*divi(pi,grados);
  for(i=0;i!=11;i++){
    if((i+1)%2!=0){
      s=1*divi(pote(radianes,(2*i)+1),fact((2*i)+1));
    }else{
      s=-divi(pote(radianes,(2*i)+1),fact((2*i)+1));
    }

    suma+=s;
  }
  printf("Valor del seno de sen(%f)= %f\n",radianes,suma);
}
