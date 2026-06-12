#include <stdio.h>
int main(){
    int i, l, n, rem, fact=1, result=0;
    printf("enter the to check wheather a strong number or not:\n");
    scanf("%d", &l);
     n=l;
    while(n!=0){
        rem = n%10;
        for (i=1;i<=rem;i++){
            fact = fact*i;
        }
        result = result + fact;
        fact = 1;
        n = n/10;
    }
    if(result == l){
        printf("your given number is a strong number.");
    }
    else 
    printf("your given number is not a strong number.");
    return 0;
}