#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of your array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Largest element = \n%d\n", largest);
    printf("Smallest element = \n%d\n", smallest);
    return 0;
}
