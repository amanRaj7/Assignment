#include <stdio.h>

#define LEN 100

int main(){
    char str1[LEN], str2[LEN];
    int i = 0, flag = 1;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(str1[i]!='\0'){
        if(str2[i]=='\0') flag = 0;
        if(str1[i]!=str2[i]) flag = 0;
        i++;
    }
    if(str2[i]!='\0') flag = 0;
    
    if(flag==0){
        printf("First string is not similar to second string.\n");
    }
    else{
        printf("First string is similar to second string.\n");
    }


    return 0;
}