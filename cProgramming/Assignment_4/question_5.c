#include <stdio.h>
#define LEN 100

int main(){
    char str[LEN];
    printf("Enter the string: ");
    gets(str);
    int i = 0;
    while(str[i] != '\0'){
        if((str[i]>=97) &&(str[i]<=122)) str[i] ^= 32;
        i++;
    }
    printf("String: %s\n", str);
    return 0;
}