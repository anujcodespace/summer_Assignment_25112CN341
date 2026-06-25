#include <stdio.h>
int main(){
    char str[100];
    int i, j, length = 0, found = 0;
    printf("Enter your string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0'){
        length++;
    }
    for (i = 0; i < length; i++){
        if (str[i] == ' ' || str[i] == '\n')
         continue;
        for (j = i + 1; j < length; j++){
            if (str[i] == str[j]){
                printf("First repeating character: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("No repeating character found\n");
    }
    return 0;
}
