#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q12)Write a program that takes as input a single character from the user; If the character is an English 
	alphabet in small case, it is converted to upper case and printed out. If the character is an English alphabet 
	in upper case, it is converted to lower case and printed out, and If the character is not an English alphabet, 
	then it is kept unchanged and printed out.
	*/
	char character;
   	 printf("Enter character: ");
	scanf("%c", &character);
	if((character<91)&&(character>64)){
	    printf("Lower case: %c\n", (character-65)+97);
	}
	else if((character>96)&&(character<123)){
	    printf("Upper case: %c\n", (character-97)+65);
	}
	else{
	    printf("Character: %c\n", character);
	}
	return 0;
}
