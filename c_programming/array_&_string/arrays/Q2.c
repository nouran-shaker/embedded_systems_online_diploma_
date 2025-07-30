#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float sum=0 ;
	float average=0;
	float numbers[n];
	
	printf("Enter the number of data:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("%d.Enter number:",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&numbers[i]);
		sum=sum+numbers[i];
	}
	average=sum/n;
	printf("Average:%f",average);
}
