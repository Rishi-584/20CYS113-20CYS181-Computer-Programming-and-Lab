#include <stdio.h>
#include<conio.h>

int Fact(int a){

    int n, i, fact;

    fact = 1;
    for ( i = 1; i <= a; i++)
    {
        fact = fact * i;

    }
    
    return fact;
}

int main()
{
    
int num;

    printf("Enter your num\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("INVALID!!\n");
        printf("Enter only positive integers");
    }
    else if (num > 0)
    {
        printf("Fact(%d) = %d",num, Fact(num));
    }
    else{
        printf("Fact(0) = 1");
        
    }

    return 0;
}
