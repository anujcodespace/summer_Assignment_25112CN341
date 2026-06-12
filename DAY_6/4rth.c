#include <stdio.h>
int main(){
    int i, j, n,p ,a=1;
    printf("enter the number:\n");
    scanf("%d", &n);
    printf("enter the power:\n");
    scanf("%d", &p);
    for (i=1;i<=p;i++){
        a=a*n;
    }
    printf("your answer for %d raise to the power %d is: %d", n, p, a);
return 0;
}