#include <stdio.h>
int main(){
    int n, sum=0;
    printf("enter the number to check wheather it is perfect or not:\n");
    scanf("%d", &n);
    for (int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }}
        if (sum==n){
            printf("your given number is perfect number.");
        }
        else 
        printf("your given number is not a perfect number.");
    return 0;
}