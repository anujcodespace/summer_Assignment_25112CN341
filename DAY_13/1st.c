#include <stdio.h>
int main(){
    int n,i;
    printf("enter the value of element:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array value:\n");
    for (i=0;i<n;i++)
{
        scanf("%d",&arr[i]);
}
printf("the array you have formed:\n");
for(i=0;i<n;i++){
printf(" %d", arr[i]);
}
     return 0;   
}