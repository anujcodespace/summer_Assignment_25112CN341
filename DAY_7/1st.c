#include <stdio.h>
int factorial(int x);

int main(){
    int num, fact;
    printf("enter the number to find factoroial:\n");
    scanf("%d", &num);
    fact = factorial(num);
    printf("factorial of the given number is: %d", fact);
    return 0;
}
int factorial(int x)
{
    if(x == 1 || x == 0)
    return 1;
    return x*factorial(x-1);
}