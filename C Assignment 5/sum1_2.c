#include <stdio.h> //wap to input 5 digit num and write 2 func to calculate sum of digit
int sum(int);
int sum2(int); // recursion

int main()
{
	int a,cpy,r,s1,s2;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	s1 = sum(a);
	s2 = sum2(a);
	printf("\nSum1: %d\n",s1);
	printf("Sum2: %d",s2);
}
int sum(int x)
{
	int s1,cpy,r;
	cpy=x;
	while(cpy!=0)
	{
		r  = cpy % 10;
		s1 = s1 + r;
		cpy= cpy / 10;
	}
	return s1;
}
int sum2(int y) //123
{
	if(y==0)
		return y;
	else
		return (y%10) + sum2(y/10);
}

