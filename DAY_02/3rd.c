#include <stdio.h>
int main(){
    int n, num, prod = 1;
    printf("enter the numbmer you the product for:\n");
    scanf("%d", &n);
    while (n>0){
       num = n%10;
       prod = prod*num;
       n = n/10;
    }
    printf("your given number, digit product is: %d", prod);
    return 0;
}