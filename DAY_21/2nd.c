#include <stdio.h>
#include <string.h>
int main(){
    char str[100], temp;
    int i;
    printf("Enter a string: ");
    scanf("%s", str);  
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < (length/2); i++){
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    printf("Reversed string is: %s", str);
    return 0;
}
