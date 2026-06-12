#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    while (n>0){
        count +=n & 1;  
        n >>= 1;     
    }
    printf("Number of set bits in your given number is: %d\n", count);
    return 0;
}
