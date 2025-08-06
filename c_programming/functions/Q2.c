#include <stdio.h>
#include <stdlib.h>
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}


int main() {
	int x;
	printf("Enter a positive number:");
	fflush(stdout); fflush(stdin);
	scanf(" %d", &x);
	printf("factorial of %d = %d",x, factorial(x));
   

}
