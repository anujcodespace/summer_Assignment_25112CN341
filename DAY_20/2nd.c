#include <stdio.h>
int main(){
    int n, i, j, flag = 0;
    printf("enter the order of the matrix:\n");
    scanf("%d", &n);
    int a[n][n];
    printf("enter the elements of the matrix:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] != a[j][i]);
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("entered matrix is symetric.");
    }
    else
    printf("entered matric is not symmetric.");
    return 0;
}