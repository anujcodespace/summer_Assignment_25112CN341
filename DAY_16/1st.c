#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0, expectedSum, missing;
    printf("Enter the number of elements:\n");
    scanf("%d", &n); 
    printf("Enter %d elements of your array:\n", n);
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    expectedSum = (n + 1) * (n + 2) / 2;  // sum of numbers from 1 to n+1
    missing = expectedSum - sum;
    printf("The missing number in the arrays is: %d\n", missing);
    return 0;
}
