#include <stdio.h>
int main()
{
	int i,n,flag=0;

	printf("Enter a number: \n");
	scanf("%d",&n);

	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}

	}
	if(flag==1)
		printf("%d is Not a prime number\n",n);
	else
		printf("%d is a Prime Number\n",n);	

	return 0;	
}
