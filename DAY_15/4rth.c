#include <stdio.h>
int main(){
    int arr[100], i, n, j, temp;
    printf("enter the number of elements in the array:\n");
    scanf("%d", &n);
    printf("enter the elements of your array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        if(arr[i] != 0){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("after shifting all zeros to the end your array is:\n");
    for (i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
return 0;
}