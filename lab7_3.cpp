#include<iostream>

using namespace std;
int adiff(int A,int B){
  int c;
  A=A%360;
  B=B%360;
  c=A-B;
   if(c<0){
    c=-c;
  }
  if(c>180){
    c=(360-c);
  }
  return c;
  }
