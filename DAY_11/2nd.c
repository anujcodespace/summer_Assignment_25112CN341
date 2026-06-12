#include <stdio.h>

int maxnum(int arr[] , int size){
     int i, max = arr[0];
     for( i=0; i<size; i++){
        if(arr[i] > max)
        max=arr[i];
     }
     return max;
}
int main(){
    int n,i;
    printf("enter the number of element in the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the element of the array:\n");
for( i = 0; i < n ; i++){
    scanf("%d", &arr[i]);
}
int max = maxnum(arr, n);
printf("maximum number is %d", max);
return 0;
}
