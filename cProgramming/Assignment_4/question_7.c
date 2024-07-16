#include <stdio.h>
#define LEN 100

int main(){
    char str1[LEN], str2[LEN], str3[LEN];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int i = 0, j = 0;
    while(str1[i]!='\0'){
        str3[j] = str1[i];
        i++; j++;
    }
    i=0;
    while(str2[i]!='\0'){
        str3[j] = str2[i];
        i++; j++;
    }
    str3[j] = '\0';
    printf("Concatenate string: %s\n", str3);
    return 0;
}