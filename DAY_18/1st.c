#include <stdio.h>
int main(){
    int i,j,n,num;
    printf("enter the number of element:");
    if (scanf("%d",&n)!=1 || n<=0){
    printf("invalid input!\n");
    return 1;
    }
    int a[n];
    printf("enter the values in array:\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if (a[j]<a[j+1]){
                num=a[j];
                a[j]=a[j+1];
                a[j+1]=num;
            }
        }
    }
    printf("sorted array (descending): ");
    for(i=0;i<n;i++)
    { 
        printf("%d",a[i]);
    }
    printf("\n");
        return 0;
}
