#include <stdio.h>
int main(){
    int i,j,min,temp,n;
    int a[100];
    printf("enter the no.");
    scanf("%d", &n);
    printf("enter the element of array");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
            min = j;
        }
    }
    if(min!=i){
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
    printf("sorted liat");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
    }
    return 0;
}