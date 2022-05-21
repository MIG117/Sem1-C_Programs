#include <stdio.h>
int main()
{
	int i,a;
	char country[5][15] = {"India","Nepal","Bangladesh","Parkistan","Srilanka"};
	char capital[5][15] = {"Delhi","Kathmandu","Dhaka","Islamabad","Colombo"};
	char coun[15];
	
	printf("Enter the country name: ");
	gets(coun);
	
	for(i=0;i<5;i++)
	{
		a = strcmp(country[i],coun);
		if(a==0)
		{
			break;
		}
	}
	printf("Capital of %s is %s",country[i],capital[i]);
	
	return 0;
}
