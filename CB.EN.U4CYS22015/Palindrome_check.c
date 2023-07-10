//Palindrome check
#include <stdio.h>
int main() {
   int a, b = 0;
   scanf("%d", &a);
   int num = a;
     if(a < 0){
        a = -1 * a;
     }
     while (a != 0) {
       int digit = a % 10;
       b = b * 10 + digit;
       a /= 10;
     }
  if(num == b){
     printf("Is a palindrome.");
  }
  else{
     printf("Is not a palindrome.");
  }
 return 0;
}
