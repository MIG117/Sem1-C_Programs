#include <stdio.h> // WAP using function which will show a number is even or odd.(use return statement)
int input(); // Non parameter
int check(int); // function Prototype declaration
void show(int,int); 

int input()
{
	int n; // local variable
	printf("Enter a number to check Odd or Even: ");
	scanf("%d",&n);
	
	return n;
}
int check(int x)
{
	if(x%2==0)
		return 1;
	else
		return 0;	
}
void show(int p ,int a) // function with formal parameter
{
	if(p==1)
		printf("%d is Even\n",a);
	else
		printf("%d is Odd\n",a);	
}
int main()
{
	int a,b,c;
	a = input();
	b = check(a);  // function with actual parameter
		show(b,a); 
}

