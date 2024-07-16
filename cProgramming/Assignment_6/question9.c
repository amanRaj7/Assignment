#include <stdio.h>

int main(int n, char *arr[]){
    FILE *fptr1, *fptr2;
    char alphabet;
    fptr1 = fopen(arr[1], "r");
    fptr2 = fopen(arr[2], "w");
    fputs("Copy from file1.txt\n", fptr2);
    alphabet = fgetc(fptr1);
    while(alphabet!=EOF){
        fputc(alphabet, fptr2);
        alphabet = fgetc(fptr1);
    }
    printf("DONE!\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}