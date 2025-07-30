#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char text[50];
	char reversed[50];
	int n;
	printf("Enter the string:");
	fflush(stdout); fflush(stdin);
	gets(text);
	n=strlen(text);
	for(int i=0;i<n;i++){
		reversed[i]=text[n-i-1];
	}
	reversed[n]=0;
	printf("Reverse string is:%s",reversed);

}
