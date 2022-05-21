#include <stdio.h>
int main()
{
		int n,cpy=0,r,sum;

		printf("Enter a number: ");
		scanf("%d",&n);
		cpy = n;

		while(n>0)
		{
			r = n % 10;
			sum = sum + (r * r * r);
			n = n / 10;
		}
		if(sum==cpy)
			printf("Its Armstrong Number: %d",sum);
		else
			printf("Not Armstrong Number %d",sum);	
	return 0;
}
/*
	n = 153
	1! + 5! + 3! = 153.
*/
