#include <stdio.h>
int main(){
    int num ,factor =2;
    printf("enter the number for prime factors:\n");
    scanf("%d", &num);
    while(num > 1){
        if(num % factor == 0){
            printf("%d ", factor);
            num = num/ factor;
        }
        else{
            factor++;
        }
    }
    return 0;
}