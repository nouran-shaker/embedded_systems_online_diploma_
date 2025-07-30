#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int element;
	int location;
	printf("Enter no of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	int arr[n+1];
	for(int i=0;i<n;i++){

			scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout); fflush(stdin);
		scanf("%d",&element);

		printf("Enter the location: ");
			fflush(stdout); fflush(stdin);
				scanf("%d",&location);
				for (int i = n; i >= location; i--) {
				    arr[i] = arr[i - 1];
				}
				arr[location - 1] = element;
				for(int i=0; i<=n;i++){
					printf("%d \t",arr[i]);
				}
}
