#include <stdio.h>
int main(){
    int i, n1, n2, j;
    printf("enter the order of matrix:\n");
    scanf("%d %d",&n1, &n2);
    int a[n1][n2], transpose[100][100];
    printf("enter the value of matrix:\n");
    for(i=0;i<n1 /*row*/ ;i++)
    {
        for(j=0;j<n2 /*col*/;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n1 ; i++){
        for(j=0; j<n2 ;j++){
            transpose[j][i] = a[i][j];
                         
        }
    }
    printf("your given matrix is:\n");
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("your transposed matrix is:\n");
    for (i=0; i<n2; i++){
        for(j=0; j<n1; j++){
            printf(" %d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}