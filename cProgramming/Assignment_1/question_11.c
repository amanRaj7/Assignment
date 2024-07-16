#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q11)Write a program that takes as input a single character from the user and check whether the entered character is a vowel or consonant.
	*/
	char character;
    printf("Enter character: ");
	scanf("%c", &character);
	if((character==65)||(character==69)||(character==73)||(character==79)||(character==85)||(character==97)||(character==101)||(character==105)||(character==111)||(character==117)){
        printf("%c is vowel\n", character);	    
	}
	else{
	    printf("%c is consonant\n", character);
	}
	return 0;
}
