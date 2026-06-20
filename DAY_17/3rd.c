#include <stdio.h>
int main(){
    int arr1[50], arr2[50], inter[50];
    int n1, n2, i, j, k = 0;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of your array:\n", n1);
    for (i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++){
        for (j = 0; j < n2; j++){
            if (arr1[i] == arr2[j]){ 
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found){
                    inter[k++] = arr1[i];
                }
            }
        }
    }

    printf("Intersection of the two arrays:\n");
    printf("[");
    for (i = 0; i < k; i++) {
        printf(" %d", inter[i]);   
    }
printf("]");
    return 0;
}
