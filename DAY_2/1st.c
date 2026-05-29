#include <stdio.h>
int main(){
    int n, r, sum=0, temp;
    printf("enter the number you want the sum for:\n");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("you sum of the digit for the number %d is %d", temp, sum);
    return 0;
}