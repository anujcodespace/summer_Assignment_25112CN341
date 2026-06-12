#include <stdio.h>
int isPrime(int num){
    int i;
    if(num <= 1) 
        return 0;

    for(i = 2; i * i <= num; i++) 
    {
        if(num % i == 0)
            return 0; 
    }
    return 1;
}

int main() {
    int number;
    printf("Enter the number:\n");
    scanf("%d", &number);
    if(isPrime(number))
        printf("your number is a prime number.\n", number);
    else
        printf("your number is not a prime number.\n", number);
    return 0;
}
