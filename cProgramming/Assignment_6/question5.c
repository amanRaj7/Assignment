#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str, int l);

int main(){
    char *sen = (char *)malloc(1024 * sizeof(char));
    int len;
    printf("Enter the sting: ");
    fgets(sen, 1024, stdin);
    len = strlen(sen);
    sen = realloc(sen, len);
    reverse(sen, len);
    printf("Reverse string: %s\n", sen);
    free(sen);
    return 0;
}

void reverse(char *str, int l){
    static int i = 0;
    char swap;
    while(i<(l/2)){
        swap = str[i];
        str[i] = str[l-i-2];
        str[l-i-2] = swap;
        i++;
        reverse(str, l);
    }
}