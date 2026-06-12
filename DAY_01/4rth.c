#include <stdio.h>
int main(){
    int num, n, count = 0;
    printf("enter the number you want to count the digit for:\n");
    scanf("%d", &n);
    num = n;
    while (n!=0){
        n = n/10;
        count++;
    }
    printf("there were total %d digit in number %d", count,num);
    return 0;
}