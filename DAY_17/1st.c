#include <stdio.h>
int main (){
int i, j, n1, n2, arr1[50], arr2[50], merge[100];
printf("enter the number of elements of first array:\n");
scanf("%d", &n1);
printf("enter %d elements of first array:\n", n1);
for (i=0 ;i<n1 ;i++){
    scanf("%d", &arr1[i]);
}

printf("enter the number of elements of second array:\n");
scanf("%d", &n2);
printf("enter %d elements of second array:\n", n2);
for (i=0 ;i<n2 ;i++){
    scanf("%d", &arr2[i]);
}

for(i=0; i<n1; i++){
    merge[i] = arr1[i];
}
for (i=0; i<n2; i++){
    merge[n1 + i]=arr2[i];
}
printf("your merged array is:\n");
for(i=0; i<n1+n2; i++){
    printf("\n%d", merge[i]);
}
return 0;
}