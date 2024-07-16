#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q7)Write a C program to find the sum of individual digits of a positive integer. The number has to be taken as input from the keyboard. The total number of digits in the number may be four.*/
    int integer, sum=0;
    printf("Enter the number: ");
    scanf("%d", &integer);
    while(integer!=0){
        sum += (integer%10);
        integer /= 10;
    }
    printf("The sum of the digits of integer is %d\n", sum);
	return 0;
}
