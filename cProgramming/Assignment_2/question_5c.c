#include <stdio.h>

int main(void) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%d", &x);
	float sum = 1, i=x,k=1, j;
	for(j=2; j<=n; j++){
		sum += (i/k);
		i *= x;
		k *= j;
	}
	printf("The sum of series: %f", sum);
	return 0;
}


