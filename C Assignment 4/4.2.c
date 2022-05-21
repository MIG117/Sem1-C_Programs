#include <stdio.h>
#include <stdlib.h>
// WAP which will accept 2 values from user and perform addition,Substraction,Dividition,Multiplication
//(+ - / x) with user choice (switchcase,using Function) 

void input(int , int);
void check(char,int,int);
void add(int , int);
void sub(int , int);
void mul(int , int);
void dive(int , int);

	//char con;
void input(int a1,int b1)
{
	char n;
	int a=a1,b=b1;
	
	printf("\nEnter a the choice: \n");
	printf("	+ for Addition\n");
	printf("	- for Substraction\n");
	printf("	* for Multiplication\n");
	printf("	/ for Dividition\n");
	printf("Choice: ");
	fflush(stdin);
		scanf("%c",&n);

		check(n,a,b); // method call & Actual Parameter
}

void check(char ac ,int a,int b) // Formal Parameter
{
	//int an;
	//double an2;
	switch(ac)
	{
		case '+': 	add(a,b);
					break;
					
		case '-': 	sub(a,b);
					break;
		
		case '*': 	mul(a,b);
					break;							
	
		case '/': 	dive(a,b);
					break;	
		
		default: 	printf("Invalid Sign Entered.....!!!\n");
					
	}
	
}

void add(int a1,int b1)
{
	int a=a1,b=b1,an;
	
	an = a + b;
	printf("\n%d + %d = %d",a,b,an);
}
void sub(int a1,int b1)
{
	int a=a1,b=b1,an;
	an = a - b;
	printf("\n%d - %d = %d",a,b,an);
}
void mul(int a1, int b1)
{
	int a=a1,b=b1,an;
	an = a * b;
	printf("\n%d x %d = %d",a,b,an);
}
void dive(int a1, int b1)
{
	int a=a1,b=b1;
	double an2;
	an2 = a / b;
	printf("\n%d %c %d = %.3lf",a,246,b,an2);
}
int main()
{
	int a,b;
	printf("Enter the 1st value: ");
	scanf("%d",&a);
	printf("\nEnter the 2nd value: ");
	scanf("%d",&b);
	
	input(a,b);
}

