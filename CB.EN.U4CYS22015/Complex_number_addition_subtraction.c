//Complex number arithmetic
#include <stdio.h>
struct complex{
 int real;
 int imag;
};
int main() {
  struct complex a, b, sum, sub;
   scanf("%d %d", &a.real, &a.imag);
   scanf("%d %d", &b.real, &b.imag);

 sum.real = a.real + b.real;
 sum.imag = a.imag + b.imag;
 sub.real = a.real - b.real;
 sub.imag = a.imag - b.imag;

 // display the result
 printf("%d+%di\n", sum.real, sum.imag);
  if(b.imag > a.imag){
     printf("%d %di\n", sub.real, sub.imag);
  }
  else{
     printf("%d+%di\n", sub.real, sub.imag);
  }