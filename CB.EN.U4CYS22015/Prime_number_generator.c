//Prime number generator 

#include<stdio.h> 

int isPrime(int num){ 

    for(int i=2; i<=(num/2); i++){ 

        if(num%i==0) 

            return 0; 

        } 

} 

int generatePrimes(int p,int q){ 

    for(int i=p;i<=q;i++){ 

        int x; 

        x = isPrime(i); 

        if(x!=0) 

            printf(" %d",i); 

    } 

}  

int main(){ 

    int i,j; 

    scanf("%d %d",&i,&j); 

    printf("Prime numbers between %d and %d are:",i,j); 

    generatePrimes(i,j); 

   return 0; 

} 