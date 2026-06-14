#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements in your array:\n");
    scanf("%d", &n);
    if(n<2){
        printf("Array must have at least 2 elements.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements of your array:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = -1;
    for(i=1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -1)
        printf("No second largest element all elements are equal.\n");
    else
        printf("Second largest element =\n%d\n", secondLargest);
    return 0;
}
