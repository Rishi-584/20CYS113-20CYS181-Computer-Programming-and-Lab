#include<stdio.h>

int main(){

int n,b;

printf("Welcome\n");

printf("Enter the number n : \n");
scanf("%d",&n);

   if(n<=0){
      printf("INVALID!! Enter only natural numbers\n");

    }
   else{
	b = n*(n+1)/2;

	printf("The sum of natural numbers upto %d is %d",n,b);
    }

   return 0;
}
