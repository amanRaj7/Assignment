#include <stdio.h>
#include <math.h>

int main(void) {
	// Assignment - 1
	/*Q8)Write a C Program to find roots of a quadratic equation where the coefficients are entered by the user.
	*/
	float a, b, c, d;
	float root1, root2;
    printf("Enter the coefficient of x^2: ");
	scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant term: ");
    scanf("%f", &c);
	d = b*b-4*a*c;
	if(d>=0){
	    root1 = (-1*b/(2.0*a))+(sqrt(d)/(2*a));
	    root2 = (-1*b/(2.0*a))-(sqrt(d)/(2*a));
	    printf("The roots of the equation (%.0fx^2)+(%.0fx)+(%.0f) are %.3f and %.3f\n", a, b, c, root1, root2);
	}
	else{
	    printf("The roots of the equation (%.0fx^2)+(%.0fx)+(%.0f) are %.3f+%.3fi and %.3f-%.3fi\n", a, b, c, (-b/(2.0*a)), (sqrt(-(d))/(2*a)), (-b/(2.0*a)), (sqrt(-(d))/(2.0*a)));
	}
	return 0;
}
