#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int product=1;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n<0){
		printf("Error!!! Factorial of negative number doesn't exist");

	}
	else{
		for(int i=2;i<=n;i++){
		product*=i;
		}
		printf("Factorial = %d",product);
	}
}
