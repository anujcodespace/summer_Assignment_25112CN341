#include <stdio.h>
int main(){
    int fact=1,i,n;
    printf("enter the number you want the factorial for:\n");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    fact= fact*i;
    printf("your number factorial is %d", fact);
    return 0;
}