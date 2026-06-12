#include <stdio.h>
int main(){
    int a,b,lcm;
    printf("enter the two number for LCM:\n");
    scanf("%d%d", &a, &b);
    printf("your LCM for the given number is:\n");
    if(a>b)
    lcm=a;
   else
   lcm=b;
   
   while(1){
    if(lcm%a==0 && lcm%b==0){
        printf("%d", lcm);
        break;
    }
    lcm++;
   }
   return 0;
}