#include <stdio.h>
#include <conio.h>
int main()
{
	int p,timee;
	float si;
	const float rate = 4;
	
	printf("Enter the Principal: \n");
	scanf("%d",&p);
	printf("Enter the time: \n");
	scanf("%d",&timee);
	printf("Rate: 4 Percent \n");
	
	si = (p * rate * timee) / 100;
	
	printf("Simple Interest: %3.f",si);
	
	return 0;
}
