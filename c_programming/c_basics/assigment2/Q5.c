#include <stdio.h>
#include <stdlib.h>

int main() {
	char letter;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&letter);

	if((letter>64 && letter<91) || (letter<123 && letter >96))
	{ printf(" %c is an alphabet",letter);
	}
	else { printf ("%c is not an alphabet",letter);}
}
