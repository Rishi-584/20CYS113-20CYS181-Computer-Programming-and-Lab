#include<stdio.h>
#include<math.h>

int main()
{

    double a, b, c;

    printf("Enter the coefficient of x^2 :");
    scanf("%lf",&a);
    printf("Enter the coefficient of x :");
    scanf("%lf",&b);
    printf("Enter the constant :");
    scanf("%lf",&c);


    double x, y ;

    x = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
    y = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);

    if (pow(b,2)-(4*a*c) < 0)
    {
        printf("The roots are imaginary");


    }
    else{
        printf("The roots are real");

        printf("The roots of the ebuation are \n");

        printf("%lf and %lf ", x, y);
    }




    return 0;
}
