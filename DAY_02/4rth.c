#include <stdio.h>
int main() {
int num, original, reverse = 0, rem;
 printf("Enter a number you have to check for palindrome:\n");
 scanf("%d", &num);
original = num;
 while (num > 0){
   rem = num % 10;    
  reverse = reverse * 10 + rem;
   num = num / 10;
   }
 if (original == reverse)
   printf("you given numner is a Palindrome number");
 else
  printf("your given number is Not a palindrome number");
     return 0;
}