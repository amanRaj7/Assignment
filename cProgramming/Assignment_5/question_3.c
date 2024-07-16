#include <stdio.h>
#define LEN 50

int subs(const char sen[], const char sub[]);

int main(){
    char sen[LEN], sub[LEN];
    int i, j, k, flag, f = 0;
    printf("Enter sentence: ");
    gets(sen);
    printf("Enter substring: ");
    gets(sub);
    printf("%d", subs(sen, sub));
    return 0;
}

int subs(const char sen[], const char sub[]){
    int i, j, k, flag;
    for(i=0; sen[i]!='\0'; i++){
        if(sub[0]==sen[i]){
            k = i;
            flag = 1;
            for(j = 0; sub[j]!='\0'; j++){
                if(sub[j]!=sen[k]){
                    flag = 0;
                    break;
                }
                k++;
            }
            if(flag==1){
                return 1;
            }
        }
    }
    return 0;
}