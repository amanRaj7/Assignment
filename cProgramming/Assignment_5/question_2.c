#include <stdio.h>
#define LEN 50

int len(char st[]);
void reverse(char *st);

int main() {
    char str[LEN];
    printf("Enter the string: ");
    fgets(str, LEN, stdin);
    reverse(str);
    printf("Reverse String: %s", str);
    return 0;
}

void reverse(char *st){
    int l = len(st), i = 0;
    char sen[l];
    for(i=0; i<l; i++){
        sen[i] = st[l-1-i];
    }
    i = 0;
    while(l--){
        st[i] = sen[i];
        i++;
    }

}

int len(char st[]){
    int i = 0;
    while(st[i]!='\0') i++;
    return i;
}