#include <stdio.h>
int main (){
    int i, n1, n2, GCD;
    printf("enter the two number for GCD:\n");
    scanf("%d%d", &n1, &n2);
    for (i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0)
        GCD = i;
    }
        printf("your GCD for the given number is:  %d", GCD);
    return 0;
}