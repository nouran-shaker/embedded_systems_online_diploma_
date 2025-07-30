#include <stdio.h>
#include <stdlib.h>

int main() {
	char text[50];
	int j=0;
	char character;
	printf("Enter a string:");

	gets(text);

	printf("Enter a character to find frequency:");
	scanf("%c",&character);
	for(int i=0 ;i<=50;i++){
		if(text[i]==0){
			break;
		}
		else if(text[i]==character){
			j++;
		}
	}
	printf("Frequency of %c =%d",character,j);

}
