#include <stdio.h>
int main(){
    int i, j, n1, n2, count=0;
    printf("enter the range of the number for prime number:\n");
    scanf("%d %d", &n1, &n2);
    printf("your orime number in this range:\n");
    for(i=n1;i<=n2;i++){
        for(j=2;j<=i;j++){
            if (i%j==0)
            break;
        }
        if(j==i)
        printf(" %d", j);
    }
    return 0;
}