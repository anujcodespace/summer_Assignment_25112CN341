#include <stdio.h>
#include <math.h>

int reverse (int num);
int main(){
    int num;
    printf("enter the number to reverse it:\n");
    scanf("%d", &num);
    printf("reverse of the given number is: %d", reverse(num));
    return 0;
}
int reverse(int num)
{
    if(num)
    return ( (num%10) * pow(10, (int)log10(num)) + reverse(num/10));
    else
    return 0;
}