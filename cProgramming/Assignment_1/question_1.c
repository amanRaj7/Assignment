#include <stdio.h>

int main(void) {
	// Assignment - 1
	/* Q1) Write a C program to add three numbers and print the result. Here the three numbers have to be taken
from the user.*/
    int a, b, c, sum;
    //get values
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    //compute sum
    sum = a+b+c;
    printf("The sum of %d, %d and %d is %d", a, b, c, sum);
	return 0;
}
