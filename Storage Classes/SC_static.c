// 2. WAP using static storage class which will show value of the variable persist between different function call.
#include <stdio.h>
void increment();

void increment()
{
	static int i;
	if(i==0)
	printf("Default Value of i: %d\n",i);
	printf("i: %d\n",i);
	i++;
}
int main()
{
	int j=0;
	
	printf("Output using Storage Class static\n");
	while(j!=5)
	{
		increment();
		j++;
	}
	return 0;	
}
