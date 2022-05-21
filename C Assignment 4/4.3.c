#include <stdio.h> //WAP to find factorial using function.
int input();
int fact(int);
void show(int,int);

int input()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	return n;
}
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	{
		f = f * i;
	}
	return f;
}
void show(int a,int b)
{
	printf("The factorial of %d is: %d",a,b);
}
int main()
{
	int x,a1,b1;
	 x = input();
	a1 = fact(x);
		show(x,a1);
	return 0;	
}
