#include <stdio.h>
#include <stdlib.h>
void prime_numbers(int a, int b) {

	for (int i = a; i < b; i++) {
	     int temp=0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
			   temp++;
			}
		}
		if (temp==0){
		    printf("%d\t",i);
		}
	}}


int main() {
	int x, y;
	printf("Enter two numbers (intervals):");
	fflush(stdout); fflush(stdin);
	scanf(" %d %d", &x, &y);
	printf("Prime numbers between %d and %d are: ",x,y);
	prime_numbers(x, y);

}
