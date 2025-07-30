/*
 ============================================================================
 Name        : Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int r,c;

	printf("Enter rows and columns of the matrix: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&r,&c);
	int a[r][c];
	int t[c][r];
	printf("Enter elements of the matrix: \n");
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("Enter element a%d%d:",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[i][j]);

		}
	}
	printf("Entered matrix:\n");
	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

	for(int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			t[j][i]=a[i][j];
		}}
		printf("Transposed matrix:\n");
		for(int i=0;i<c;i++){
			for (int j=0;j<r;j++){
				printf("%d \t",t[i][j]);
			}
			printf("\n");}}
