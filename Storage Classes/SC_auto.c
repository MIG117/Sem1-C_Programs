// 1. WAP using auto storage class which will show till the control remain within the block in which the variable is defined.
#include <stdio.h>
void nonauto();
void withauto();

void nonauto()
{
	int i=1;
	{
		 i=2;
		{
			i=3;
			printf("Most Inner Block i: %d\n",i);
		}
		printf("Inner Block i: %d\n",i);
	}
	printf("Outer Block i: %d\n",i);
}
void withauto()
{
	 auto int i=1;
	{
	    auto int i=2;
		{
			auto int i=3;
			printf("Most Inner Block i: %d\n",i);
		}
		printf("Inner Block i: %d\n",i);
	}
	printf("Outer Block i: %d\n",i);
}
int main()
{
	printf("Output Without using Auto Storage Class\n");
	nonauto();
	
	printf("\nOutput using Auto Storage Class\n");
	withauto();
	
	return 0;	
}

