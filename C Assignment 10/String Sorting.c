//10.4 String Sorting Concept - strcmp();
#include <stdio.h>


int main()
{
	char str[3][20];
	char temp[10];
	int i,j,count=0;
	
	printf("Enter 5 Names: ");
	for(i=0;i<3;i++)
	{
		scanf("%s",&str[i]);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],temp);
			}
		}
	}
	printf("Sorted Names\n");
	for(i=0;i<3;i++)
	{
		printf("%s ",str[i]);
	}
	return 0;	
}
