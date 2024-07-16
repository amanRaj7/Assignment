#include <stdio.h>

int main(){
    int number, flag = 1;
    printf("Enter the numbers: ");
    scanf("%d", &number);
    do{
        if(number%2!=0){
            printf("Inpur integer is not power of 2");
            flag = 0;
            break;
        }
        number /= 2;
    }while(number!=1);
    if(flag==1){
        printf("Input integer is power of 2");
    }
    return 0;
}