#include <stdio.h>
int main(){
    int n, i, sele, found = 0;
    printf("Enter number of elements in  array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of your array:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you have to search in the array:\n");
    scanf("%d", &sele);
    for(i=0; i<n; i++) {
        if(arr[i] == sele){
            printf("Element %d found at position %d.\n", sele, i+1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Element %d not found in the array.\n", sele);
    }
    return 0;
}
