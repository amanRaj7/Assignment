#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 50

void print_largestWord(const char sen[]);

int main(){
    char sen[LEN];
    printf("Enter sentense: ");
    fgets(sen, LEN, stdin);
    print_largestWord(sen);
}

void print_largestWord(const char sen[]){
    char **word;
    int cap = 1, i, j = 0, *len, max = 0;
    word =(char **) malloc(cap * sizeof(char *));
    len =(int *) malloc (cap * sizeof(int));
    word[cap-1] =(char *) malloc(1024 * sizeof(char));
    len[cap-1] = 0;
    for(i=0; sen[i]!='\0'; i++){
        len[cap-1]++;
        if(sen[i]==' '){
            word[cap-1][j] = '\0';
            j= 0;
            max = (len[max]<=len[cap-1]) ? (cap-1) : max;
            cap++;
            word = realloc(word, cap * sizeof(char *));
            word[cap-1] =(char *) malloc(1024*sizeof(char));
            len = realloc(len, cap * sizeof(int));
            len[cap-1] = 0;
            continue;
        }
        word[cap-1][j++] = sen[i];
    }
    max = (len[max]<len[cap-1]) ? (cap-1) : max;
    printf("Largest Word: %s\n", word[max]);
    free(len);
    for(i=0; i<cap; i++) free(word[i]);
    free (word);
}