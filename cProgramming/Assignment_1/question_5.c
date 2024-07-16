#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q5)Write a C program that can take three integer numbers as input from the user and prints the largest
among them.*/
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a>b)&&(a>c)){
        printf("%d is the largest\n", a);
    }
    else if(b>c){
        printf("%d is the largest\n", b);
    }
    else{
        printf("%d is the largest\n", c);
    }
	return 0;
}
