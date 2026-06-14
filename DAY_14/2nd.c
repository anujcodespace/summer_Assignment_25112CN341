#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    int arr[n];
    int visited[n];
    printf("Enter %d elements of your array:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        visited[i] = 0;  
    }
    printf("Frequency of elements:\n");
    for(i = 0; i < n; i++){
        if(visited[i] == 1)  
            continue;
        count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
