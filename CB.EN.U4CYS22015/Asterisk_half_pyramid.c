//Half pyramid of *
#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
     if (a<=0 || a>=25){
         printf("Invalid Input");
     }
     else{
        int i,j;
        for (i = 0; i < a; i++){
             for (j = 0; j <= i; j++){
                       printf("*\t");
             }
             printf("\n");
        }
     }
 return 0;
}