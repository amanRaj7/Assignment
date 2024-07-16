#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int space = n-1, i, star = 1;
    while(n!=0){
        for(i=0; i<space; i++) printf(" ");
        space--;
        for(i=0; i<star; i++) printf("*");
        star++;
        printf("\n");
        n--;
    }
    return 0;
}