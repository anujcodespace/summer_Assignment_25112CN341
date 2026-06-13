#include <stdio.h>
int isPerfect(int num){
    int i, sum = 0;
    for(i = 1;i <= num/2;i++) {
        if(num % i==0){
            sum += i;
        }
    }
    return (sum==num);
}
int main(){
    int number;
    printf("Enter your number:\n");
    scanf("%d", &number);
    if(isPerfect(number))
        printf("your given number is a Perfect number.\n");
    else
        printf("your given number is not a Perfect number.\n");
    return 0;
}
