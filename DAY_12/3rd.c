#include <stdio.h>
void fibonacci(int n){
    int i, a = 0, b = 1, next;
    printf("Fibonacci series upto your given terms:\n");
    for(i = 1;i <= n;i++){
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main(){
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}
