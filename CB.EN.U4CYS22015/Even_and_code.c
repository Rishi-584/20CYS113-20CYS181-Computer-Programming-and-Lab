#include <stdio.h>

int main()
{

    int num;

    printf("Enter your num\n");
    scanf("%d", &num );

    if (num % 2 == 0)
    {
        printf("The num is even\n");
    }
    else{
        printf("The num is odd\n");
    }
    
    printf("THANK YOU");

    return 0;
}