#include <stdio.h>
#include <string.h>
#define LEN 100

int main(){
    char str[LEN];
    printf("Enter the string: ");
    gets(str);
    int i = 0, len = strlen(str), flag = 1;
    for(i=0; i<len/2; i++){
        if(str[i]!=str[len-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag == 0) printf("Given string is not palindrome.\n");
    else printf("Given string is palidrome.\n");
    return 0;
}