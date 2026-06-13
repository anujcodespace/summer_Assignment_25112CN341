#include <stdio.h>
int main() {
    int n, i, sum = 0;
    float average;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of your array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum+arr[i]; 
    }
    average = (float)sum / n;
    printf("your given array is:\n");
    for (i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
    printf("Sum of array elements is:\n%d\n", sum);
    printf("Average of array elements is:\n%.2f\n", average);
    return 0;
}
