#include <stdio.h>
int main(){
    int row, col, i, j, sum = 0;
    printf("enter the numebr of rows of the matrix:\n");
    scanf("%d", &row);
    printf("enter the numebr of column of the matrix:\n");
    scanf("%d", &col);
    int a[row][col];
    printf("enter the elements of the matrix:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
        scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<row; i++){
        sum = 0;
        for(j=0; j<col; j++){
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
    }