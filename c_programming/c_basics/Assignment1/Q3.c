#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;
	int sum=0;
	printf("Enter two integers:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("sum : %d",sum);
}
