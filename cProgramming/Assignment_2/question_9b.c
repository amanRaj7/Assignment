#include <stdio.h>

int main(){
    int number;
    printf("Enter the number of rows: ");
    scanf("%d", &number);
    int i=1, j=1, z;
    while(number!=0){
        for(z=0; z<i; z++) printf("%d ", j++);
        i++;
        printf("\n");
        number--;
    }
    return 0;
}