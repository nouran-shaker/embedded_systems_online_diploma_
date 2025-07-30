#include <stdio.h>
#include <stdlib.h>

int main() {
	char text[50];
	int j=0;

	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(text);
	for(int i=0;i<50;i++){
		if(text[i]==0){break;
	}
		else{j++;

}}
	printf("Length of string: %d",j);}
