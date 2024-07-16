#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q4)Write C programs to evaluate the following expressions:
	(b) 5x3 + 4x2y2 + 4y3 + 30*/
	float x, y, val;
    printf("(b) 5x^3+4x^2y^2+4y^3+30\nEnter the value of x: ");
	scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
	val = 5*x*x*x + 4*x*x*y*y + 4*y*y*y + 30;
	printf("The value of 5x^3+4x^2y^2+4y^2+30 at x = %.3f and y = %.3f is %.3f", x, y, val);
	return 0;
}
