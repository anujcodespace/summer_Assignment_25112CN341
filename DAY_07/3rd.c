#include<stdio.h>
int sum(int);

int main()
{
    int n, res;
    printf("enter a number:\n");
    scanf("%d", &n);
    res = sum(n);
    printf("sum of the digits of the given nnumber is: %d", res);
return 0;
}
 int rem, s=0;
 int sum(int n)
 {
    if(n)
    {
        rem = n%10;
        s = s+rem;
        sum(n/10);
    }
    return (s);
 }