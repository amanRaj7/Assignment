#include <stdio.h>

int main(void) {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int i=1, sum = 0;
	for(i=1; i<=n; i++) sum += i;
	printf("Sum of the series: %d", sum);
	return 0;
}


