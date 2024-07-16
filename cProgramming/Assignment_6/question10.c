#include <stdio.h>

int main(int n, char *arr[]){
    FILE *ptr1, *ptr2;
    ptr1 = fopen(arr[1], "r");
    ptr2 = fopen(arr[2], "r");
    char alp1, alp2;
    int flag = 1;
    alp1 = fgetc(ptr1);
    alp2 = fgetc(ptr2);
    while(alp1!=EOF){
        if(alp1!=alp2){
            printf("0\n");
            flag = 0;
            break;
        }
        if(alp2==EOF){
            printf("0\n");
            flag = 0;
            break;
        }
        alp1 = fgetc(ptr1);
        alp2 = fgetc(ptr2);
    }
    if((alp1==EOF)&&(alp2!=EOF)){
        printf("0\n");
        flag = 0;
    }
    else if((alp1==EOF) &&(alp2==EOF)){
        flag = 1;
    }
    if(flag==1) printf("1\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}