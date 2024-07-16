#include <stdio.h>
#define LEN 100

int main(){
    char str[LEN];
    static int i, count_a, count_e, count_i, count_o, count_u;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]==65 || str[i]== 97) count_a++;
        else if((str[i]==69) || (str[i]== 101)) count_e++;
        else if((str[i]==73) || (str[i]== 105)) count_i++;
        else if((str[i]==79) || (str[i]== 111)) count_o++;
        else if((str[i]==85) || (str[i]== 117)) count_u++;
        i++;
    }
    printf("Occurrence of vowels\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", count_a, count_e, count_i, count_o, count_u);
    return 0;
}