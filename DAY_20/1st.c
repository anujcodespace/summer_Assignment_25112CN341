#include <stdio.h>
int main(){
    int i,n,j,k;
    printf("enter the number of element:\n");
    scanf("%d",&n);
    int a[n][n], b[n][n], multiply[n][n];
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
    
    for (i=0;i<n;i++){
    for(j=0;j<n;j++){
       multiply[i][j]=0;
        for (k=0;k<n;k++)
        {
            multiply[i][j]+=a[i][k]*b[k][j];
        }
    }
}
    printf("multplied matrix\n");
    for(i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
        printf("%d  ", multiply[i][j]);
       }
       printf("\n");
    }
    return 0;
}