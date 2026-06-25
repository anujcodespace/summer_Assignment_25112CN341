#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char result;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n' && str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
        }
    }
    for (i = 0; i < 256; i++){
        if (freq[i] > max){
            max = freq[i];
            result = (char)i;
        }
    }
    printf("Maximum occurring character is '%c' appears %d times \n", result, max);
    return 0;
}
