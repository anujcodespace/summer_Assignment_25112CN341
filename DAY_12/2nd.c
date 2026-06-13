#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int original = num, sum = 0, digitsum = 0, digit, temp;
    temp = num;
    while(temp > 0){
        digitsum++;
        temp = temp / 10;
    }
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum = sum + (int)pow(digit, digitsum);
        temp = temp / 10;
    } 
    return (sum == original);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(isArmstrong(number))
        printf("your given number is an Armstrong number.\n");
    else
        printf("your given number is not an Armstrong number.\n");
    return 0;
}
