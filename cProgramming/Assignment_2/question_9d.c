#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	int spaces = n-1, i = 65, j = 1, k;
	while(n!=0){
		for(k=0; k<spaces; k++) printf("  ");
		spaces--;
		for(k=0; k<j; k++) printf("%c ", i++);
		j++;
		printf("\n");
		n--;
	}
	return 0;
}


