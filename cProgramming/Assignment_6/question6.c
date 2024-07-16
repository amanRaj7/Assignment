#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_sen(char *s, int l);
void reverse(char *s, int l);

int main(){
    int len;
    char *sen;
    sen = (char *)malloc(1024 * sizeof(char));
    if(sen==NULL) printf("Error!");
    printf("Enter the sentense: ");
    gets(sen);
    len = strlen(sen);
    sen = realloc(sen, len+1);
    sen[len] = '\0';
    reverse_sen(sen, len);
    printf("Strig: %s\n", sen);
    free(sen);
}

void reverse_sen(char *s, int l){
    int i = 0, count = 0, j = 0, k;
    char *word;
    word = (char *)malloc(1024 * sizeof(char));
    if(word==NULL) printf("Error!");
    for(i=0; i<l; i++){
        if(s[i]!=' '){
            word[j++] = s[i];
        }
        else{
            word = realloc(word, j+1);
            word[j] = '\0';
            reverse(word, j);
            for(k = i-j; k<i; k++) s[k] = word[k-i+j];
            j = 0;
            //printf("%s", word);
        }
    }
    word = realloc(word, j+1);
    word[j] = '\0';
    reverse(word, j);
    for(k = i-j; k<i; k++) s[k] = word[k-i+j];
    free(word);
}

void reverse(char *s, int l){
    int i = 0;
    char swap;
    for(i=0; i<(l/2); i++){
        swap = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = swap;
    }
}