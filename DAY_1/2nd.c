#include <stdio.h>
int main(){
    int i, n;
    printf("enter the multiplication table you want:\n");
    scanf("%d", &n);
    for(i=0;i<=10;i++){
     printf("%d x %d = %d\n", n, i, n*i);
    }
return 0;
} 