#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int element;

	printf("Enter no of elements:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	int arr[n];
	for(int i=0 ; i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched:");
	scanf("%d",&element);
	for(int i=0; i<n;i++){
		if (arr[i]==element){
			printf("Number found at the location =%d",i+1);
			break;
		}
	}
}
