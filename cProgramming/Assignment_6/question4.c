#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* conversion(int n, int b);
char* reverse(char *s, int len);

int main(){
    int num, base;
    char *result;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    printf("Enter base number: ");
    scanf("%d", &base);
    result = conversion(num, base);
    printf("%s\n", result);
    return 0;
}

char* conversion(int n, int b){
    char *arr, *str_num = "0123456789ABCDEF";
    int i = 1;
    arr = calloc(i, sizeof(char));
    while(n>0){
        arr[i-1] = str_num[n%b];
        n /= b;
        i++;
        arr = realloc(arr, i);
    }
    arr[i-1] = '\0';
    char *final = (char *)malloc(i * sizeof(char));
    final = reverse(arr, i);
    return final;
}

char *reverse(char *s, int len){
    char *res =(char *)calloc(len, sizeof(char));
    int j = 0;
    for(int i = len-2; i>=0; i--){
        res[j] = s[i];
        j++;
    }
    res[j] = '\0';
    return res;
}