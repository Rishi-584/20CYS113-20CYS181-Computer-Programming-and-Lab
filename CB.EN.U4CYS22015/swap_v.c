#include<stdio.h>

int main(){

 int a,b,c;

  printf("Welcome to calculator\n");
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);


  c = a;
  a = b;
  b = c;

 printf("The value of a is %d\n",a);
 printf("The value of b is %d\n",b);

return 0;
}
