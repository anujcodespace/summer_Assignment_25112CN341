#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int i, j, found;
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)){
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; i < strlen(str1); i++){
        found = 0;
        for (j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '0'; // mark as used
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("given string is Not anagrams\n");
            return 0;
        }
    }
    printf("given Strings is anagrams\n");
    return 0;
}

