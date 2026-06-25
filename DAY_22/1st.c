#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i,len,flag=0;
    printf("enter the string:");
    fgets (str,sizeof(str),stdin);

str[strcspn(str,"\n")]='\0';
len=strlen(str);
for(i=0;i<len/2;i++){
    if(str[i]!=str[len-i-1]){
        flag=1;
        break;
    }
}
if (flag==0)
printf("your string is palendrome");
else
printf("your string is not palendrome");

return 0;

}