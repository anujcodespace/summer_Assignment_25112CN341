#include <stdio.h>

int main() {
    int arr[100], freq[100], n, i, j, maxFreq, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n", n);
    for (i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (i = 0; i<n; i++){
        int count = 1;
        if (freq[i] != 0){ 
            for (j = i+1; j<n; j++){
                if (arr[i] == arr[j]){
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count;
        }
    }
    maxFreq = freq[0];
    element = arr[0];
    for (i=1; i<n; i++){
        if (freq[i] > maxFreq){
            maxFreq = freq[i];
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\nappears %d times", element, maxFreq);
    return 0;
}
