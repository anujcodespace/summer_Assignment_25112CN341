#include <stdio.h>
int main(){
    int i,n,beg,mid,end,found=0,a[10],num;
    printf("enter the number of eement n=in array:");
    scanf("%d",&n);
    printf("enter the value in array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element that has to be searched:");
    scanf("%d",&num);
    beg=0,end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==num)
        {
            printf("%d your number is at position =%d", num,mid);
            found=1;
            break;
        }
        else if (a[mid]>num)
        end=mid-1;
        else
        beg=mid+1;
    }
    if(beg>end&&found==0)
    printf("%d does not exist in the array", num);
    return 0;
}
