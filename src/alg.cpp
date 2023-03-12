// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double result =1.0;
  for (int i=1, i<=power;i++)
  {
    result = result*x;
  }
  return(result);
}

uint64_t fact(uint16_t n) {
  if(n < 0) 
    return 0; 
  if (n == 0) 
    return 1; 
  else 
    return n * fact(n - 1); 
  cout<<fact<<endl;
}

double calcItem(double x, uint16_t n) {
  int i=0;
  double d=1;
  double e=0.0;


  while (i<n){
    d=d*x/n;
    e=1+e*d;
    cout << e<<endl;
    i++;}
}

double expn(double x, uint16_t count) {
 
    double result =1.0;
    for (int i=1; i<=power;i++)
    {
      result += result*x/i;
    }
    return(result);
}

double sinn(double x, uint16_t count) {

  int i=0;
  int s=0;
  int q = 1;
  long int f=1;
  int m=1;
  double d=x;
  double sinx1=0;
  double sinx2=0;


  while (i<n){
    sinx1=sinx1+q*(d/f);
    cout << sinx1 <<endl;
    d=d*x*x;
    f= f*(m+1)*(m+2);
    m=m+2;
    q = -q;
    i++;}
}
}

double cosn(double x, uint16_t count) {
  int i=0;
  int q = 1;
  long int f=1;
  int m=0;
  double d=x;
  double cosn=0;
  

  while (i<n){
    cosn=1-q*cosn*(d/f);
    cout << cosn <<endl;
    
    d=d*x*x;
    f= f*(m+1)*(m+2);
    m=m+2;
    q = -q;
    i++;}
}
