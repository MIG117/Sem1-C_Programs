#include <stdio.h>
int fibo(int);

int main()
{
	int n,i,a=0;
	printf("Enter a value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",fibo(a));
			a++;
	}
}
int fibo(int x)
{
	if(x==0 || x==1)
		return x;
	else
		return fibo(x-1) + fibo(x-2);	
}
