#include <stdio.h>

int main(void) {
	int n, x;
	printf("Enter n: ");
	scanf("%d", &n);
	int sum = 0, i;
	for(i=1; i<=n; i++){
		sum += (i*2);
	}
	printf("The sum of series: %d", sum);
	return 0;
}


