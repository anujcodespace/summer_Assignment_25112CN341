#include <stdio.h>
int main(){
    int arr[100], i, n, temp;
    printf("enter the number of elements of your array:\n");
    scanf("%d", &n);
    printf("enter the elements of your array:\n");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    temp = arr[n-1];
    for (i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    printf("after right rotation your array is:\n");
    for (i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
    return 0;
}