#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q9)Write C Program to check whether a given year entered from the keyboard is a leap year or not.
	*/
	int year;
    printf("Enter the year: ");
	scanf("%d", &year);
	if((year%4==0)&&(year%100!=0)){
	    printf("%d is a leap year\n", year);
	}
	else if((year%400)==0){
	    printf("%d is a leap year\n", year);
	}
	else{
	    printf("%d is not a leap year\n", year);
	}
	return 0;
}
