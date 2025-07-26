#include <stdio.h>
#include <stdlib.h>

int main() {
	char x;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c is %d",x,x);
}
