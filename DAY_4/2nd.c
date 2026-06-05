#include <stdio.h>
int main(){
    int i, n, a=0, b, c;
    printf("enter the term upto which you want:\n");
    scanf("%d", &n);
   for (i=1; i<=n; i++){
    printf("%d", a);
    c= a+b;
    a=b;
    b=c;
   }
   return 0;

}