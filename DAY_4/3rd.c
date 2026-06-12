#include <stdio.h>
int main (){
    int n,r,arm=0,c;
    printf("enter the number:\a");
    scanf("%d", &n);
    c=n;
    while(n>0){
       r = n%10;
       arm = r*r*r + arm;
       n=n/10;
    }
    if(arm==c){
        printf("entered number is armstrong.");
    }
    else printf("entered number is not armstrong.");
    return 0;
}