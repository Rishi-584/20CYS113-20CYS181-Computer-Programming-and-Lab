#include<stdio.h>

int main(){

  int n;
   printf("Welcome\n");

   printf("Enter a number\n");
   scanf("%d",&n);

   if(n%2==0){

	printf("The number entered is even\n");
   }
   else{
	printf("The number entered is odd\n");
   }

   return 0;
}
