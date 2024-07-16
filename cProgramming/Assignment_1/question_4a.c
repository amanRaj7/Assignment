#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q4)Write C programs to evaluate the following expressions:
    (a) 4x2 + 2x + 10*/
    float x, val;
    printf("(a) 4x^2+2x+10\nEnter the value of x: ");
    scanf("%f", &x);
    val = 4*x*x + 2*x + 10;
    printf("The value of 4x^2+2x+10 at x=%.3f is %.3f", x, val);
	return 0;
}
