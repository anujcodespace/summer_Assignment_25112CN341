#include <stdio.h>
int main(){
    int i,n,j,k;
    printf("enter the number of element:\n");
    scanf("%d",&n);
    int a[n][n],b[n][n],sum[n][n],multiply[n][n];
    printf("enter the value of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("added matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d", sum[i][j]);
        }
        printf("\n");
    }
return 0;
}