#include <stdio.h>
int main(){
    int n, r, a=0, base = 1;
    printf("enter the decimal number:\n");
    scanf("%d", &n);
    while(n>0){
        r = n%2;
        a = a + base*r;
        n = n/2;
        base = base * 10;
    }
    printf("your binary number for the given number is: %d", a);
    return 0;
}