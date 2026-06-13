#include <stdio.h>
int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while(num > 0){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num /= 10;
    }
    return (original==reversed);
}
int main(){
    int i, start, end;
    printf("Enter the range of number:\n");
    scanf("%d %d", &start, &end);
    printf("Palindrome numbers between the given range is:\n");
    for(i = start;i <= end;i++){
        if(isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
