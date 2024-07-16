#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q3)(b) Convert the equivalent temperature in Celsius (C) to Fahrenheit (F). Where C have to be taken from the keyboard.*/
    float fah, cel;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    fah = ((9*cel)/5)+32;
    printf("The temperature in Fahrenheit: %.3f\n", fah);
	return 0;
}
