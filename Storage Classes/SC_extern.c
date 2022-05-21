// 3. WAP using extern storage class which will show the life of the varible as long as the program execution does not come to an end.
#include <stdio.h>
int i;
void rise();
void down();

void rise()
{
	
	printf("i = %d\n",i);
	i++;
}
void down()
{
	
	printf("i = %d\n",i);
	i--;
}
int main()
{
	printf("Default Value of i: %d\n",i);
	printf("Output using Storage Class extern (Global Variable)\n");
	printf("Incerement\n");
	rise();
	rise();
	rise();
	printf("Decerement\n");
	down();
	down();
	down();
	return 0;	
}
