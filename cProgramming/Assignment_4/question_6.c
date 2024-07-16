#include <stdio.h>
#define LEN 100

int main(){
    char str[LEN];
    printf("Enter the string: ");
    gets(str);
    int len = 0;
    while(str[len] != '\0') len++;
    printf("Length of string: %d", len);
    return 0;
}