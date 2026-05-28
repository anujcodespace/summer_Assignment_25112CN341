#include <stdio.h>
int main(){
    int n, i, sum=0;
 printf("enter the number upto which you have to sum the digit:\n");
 scanf("%d", &n);
 for (i=1; i<=n; i++){
   sum = sum + i;
 }
   printf("your sum is: %d", sum);
   return 0;
}