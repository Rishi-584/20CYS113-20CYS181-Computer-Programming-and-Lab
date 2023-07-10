//Number Radix converter 

#include<stdio.h> 

void decimalToBinary(int k){ 

        int n[50]; 

        int i=0; 

        int p = k; 

        while(p>0){ 

            n[i]=p%2; 

            p /=2; 

            i++; 

        } 

        printf("Binary equivalent: "); 

        for(int j = i-1;j>=0;j--){ 

            printf("%d",n[j]); 

        } 

        printf("\n"); 

} 

void decimalToOctal(int k){ 

        int n[50]; 

        int i=0; 

        int p = k; 

        while(p>0){ 

            n[i]=p%8; 

            p /=8; 

            i++; 

        } 

        printf("Octal equivalent: "); 

        for(int j = i-1;j>=0;j--){ 

            printf("%d",n[j]); 

        } 

        printf("\n"); 

} 

void decimalToHexadecimal(int k){ 

        int n[50]; 

        int i=0; 

        int p = k; 

        while(p>0){ 

            n[i]=p%16; 

            p /=16; 

            i++; 

        } 

        printf("Hexadecimal equivalent: "); 

        for(int j = i-1;j>=0;j--){ 

            if(n[j]==10){ 

                printf("A"); 

            } 

            else if(n[j]==11){ 

                printf("B"); 

            } 

            else if(n[j]==12){ 

                printf("C"); 

            } 

            else if(n[j]==13){ 

                printf("D"); 

            } 

            else if(n[j]==14){ 

                printf("E"); 

            } 

            else if(n[j]==15){ 

                printf("F"); 

            } 

            else{ 

                printf("%d",n[j]); 

            } 

        }printf("\n"); 

} 

int main(){ 

    int n; 

    scanf("%d",&n); 

    if(n<=0){ 

        printf("Error: Value should be greater than 0"); 

    } 

    else{ 

    decimalToBinary(n); 

    decimalToOctal(n); 

    decimalToHexadecimal(n); 

    } 

}