#include <stdio.h>
#include <stdlib.h>

int main() {

	int x;
	printf("Enter an integer :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x );
	printf("you entered : %d",x);
	return 0;
}
