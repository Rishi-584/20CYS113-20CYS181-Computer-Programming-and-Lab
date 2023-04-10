#include<stdio.h>
#include<math.h>

int main(){
  int a,b,c;
  float s;

  printf("Welcome to area calculator of triangle\n");
  printf("Enter the base\n");
  scanf("%d",&a);
  printf("Enter the height\n");
  scanf("%d",&b);


  double area = 0.5 * a * b;

  printf("The area of triangle is %.2lf \n",area);

  return 0;

}
