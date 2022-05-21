/*  Program 2.1
 Program to accept a number and to find & and print odd or even. [If-else concept] */
#include <stdio.h> /* Preprocessor Directives. */
int main(void)
{
	int n=0;

	printf("Enter a number to find Even or odd: ");
		scanf("%d",&n); /*Input of value. */
		if(n%2==0) {
			printf("\n%d is Even Number",n);
		} else {
			printf("\n%d is Odd Number",n);
		}
	return 0;
}
