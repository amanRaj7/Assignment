#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	int spaces = n-1, i = 1, j, k=1;
	while(n!=0){
		for(j=0; j<spaces; j++) printf("  ");
		spaces--;
		for(j=0; j<k; j++) printf("%d ", i++);
		k+=2;
		printf("\n");
		n--;
	}
	return 0;
}


