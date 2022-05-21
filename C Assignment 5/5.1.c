// 5.1 WAP using function name - swap() of 2 value using call by reference
#include <stdio.h> 
int swap(int *,int *);

int swap(int *c, int *d)
{
	int t;
	
	t = *c;
	*c = *d;
	*d = t;
}

int main()
{
	int a,b;
	printf("\nEnter the value of a: ");
	scanf("%d",&a);
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	
	printf("\nA: %d",a);
	printf("\nB: %d",b);
	swap(&a,&b);
	printf("\n\nA: %d",a);
	printf("\nB: %d",b);
	
	return 0;
}

