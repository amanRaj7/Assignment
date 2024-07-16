#include <stdio.h>

int main(void) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);
	int sum = 0, i=1, j;
	for(j=1; j<=n; j++){
		sum += i;
		i *= x;
	}
	printf("The sum of series: %d", sum);
	return 0;
}
