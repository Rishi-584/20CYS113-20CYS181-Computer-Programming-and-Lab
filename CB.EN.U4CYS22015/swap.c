#include<stdio.h>
#include<math.h>

int main(){

 int a,b;

  printf("Welcome to calculator\n");
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);


  a = a+b;
  b = a-b;
  a = a-b;

 printf("The value of a is %d\n",a);
 printf("The value of b is %d\n",b);

return 0;
}

