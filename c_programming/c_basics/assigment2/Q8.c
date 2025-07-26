
#include <stdio.h>
#include <stdlib.h>

int main() {

	char operator;
	float a,b;
	float result=0;

	printf("Enter operator either + or - or * or divide :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a , &b);

	switch (operator){
	case '+':
	{ result=a+b;} 
	break;
	case '-':
	{ result=a-b;} 
	break;
	case '*':
	{ result=a*b;} 
	break;
	case '/':
	{ result=a/b;} 
	break;
	}
	printf( "result = %f %c %f = %f",a,operator,b,result);
}
