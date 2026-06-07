#include <stdio.h>
int main(){
    int n, r, a=0, base = 1;
    printf("enter the binary number:\n");
    scanf("%d", &n);
    while(n>0){
        r = n%10;
        a = a + base*r;
        n = n/10;
        base = base * 2;
    }
    printf("your decimal number for the given number is: %d", a);
    return 0;
}