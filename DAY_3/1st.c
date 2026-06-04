#include <stdio.h>
int main(){
    int i, n, count=0;
    printf("enter the number you want to check weather prime or not:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
        count++;
        }
    }
    if (count == 2)
    printf("your given number is prime");
    else 
    printf("your given number is not prime");
    return 0;
}