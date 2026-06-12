#include <stdio.h>
int sumofdigit(int num){
    int sum = 0, temp;
    while(num != 0){
        temp = num % 10;
        sum = sum + temp;
        num = num/10;
    }
    return sum;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    int result = sumofdigit( n );
    printf("sum of digit of the given number is: %d", result);
    return 0;
}