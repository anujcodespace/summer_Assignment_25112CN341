#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int evenCount = 0, oddCount = 0;
    printf("Enter %d elements of your array:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("your array is:\n");
    for (i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
    printf("Number of even elements is:\n%d\n", evenCount);
    printf("Number of odd elements is:\n%d\n", oddCount);
    return 0;
}
