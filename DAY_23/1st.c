#include <stdio.h>
int main(){
    char str[100];
    int i, j, length = 0, found = 0;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0'){
        length++;
    }
    for (i = 0; i < length; i++){
        if (str[i] == ' ' || str[i] == '\n') 
        continue;
        found = 1;
        for (j = 0; j < length; j++){
            if (i != j && str[i] == str[j]){
                found = 0;
                break;
            }
        }
        if (found){
            printf("First non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}
