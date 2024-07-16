#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q6)Write a C program to check whether a number entered by the user is even or odd.*/
	int number;
    printf("Enter the number: ");
	scanf("%d", &number);
	if(number%2==0){
	    printf("%d is Even number\n", number);
	}
	else{
	    printf("%d is Odd number\n", number);
	}
	return 0;
}
