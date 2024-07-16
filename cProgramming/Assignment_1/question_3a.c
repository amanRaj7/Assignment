#include <stdio.h>

int main(void) {
	// Assignment - 2
	/*Q3)(a) Convert the equivalent temperature in Fahrenheit (F) to Celsius (C). Where F have to be taken
from the keyboard.*/
    float fah, cel;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = (5*(fah-32))/9;
    printf("The temperature in Celsius: %.3f\n", cel);
	return 0;
}
