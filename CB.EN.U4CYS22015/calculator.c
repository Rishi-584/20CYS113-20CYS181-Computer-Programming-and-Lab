#include<stdio.h>
#include<math.h>

int main(){

 int a,b;

  printf("Welcome to calculator\n");
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);

  printf("The sum of %d and %d is %d \n",a,b,a+b);
  printf("The difference between %d and %d is %d \n",a,b,a-b);
  printf("The product of %d and %d is %d \n",a,b,a*b);
  printf("The division of %d with %d is %d \n",a,b,a/b);
  printf("The modulus of %d with  %d is %d",a,b,a%b);

 return 0;
}

