#include <stdio.h>
#define LEN 50

int stringLength(char src[]);

int main(){
    char sen[LEN];
    int len;
    printf("Enter string: ");
    fgets(sen, LEN, stdin);
    len = stringLength(sen);
    printf("Length of string: %d\n", len);
    return 0;
}

int stringLength(char src[]){
    int len = 0;
    while(src[len]!='\0') len++;
    return (len-1);
}