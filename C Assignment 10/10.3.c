// 10.3  Searching friend name from the list.
#include <stdio.h>

void namelist();

void namelist()
{
	char names[5][25],searName[25];
	int i,j,flag=0;
	
	printf("Enter the 5 names: ");
	for(i=0;i<5;i++)
	{
		printf("\nname %d: ",i+1);
		scanf("%s",names[i]);
	}
	
	printf("Enter the name to be searched: ");
	scanf("%s",searName);
	
	for(i=0;i<5;i++)
	{
		
			if(strcmp(searName,names[i])==0)
			{
				flag=1;
				break;	
			}	
	}
	if(flag==1)
	{
		printf("\nSearch Found!\nYour Friend Name is in the list at position %d",i+1);
	}
	else
	{
		printf("\nSearch Not Found...!\nYour Friend Name is not in the list ");
	}
}
int main()
{
	 namelist();
	return 0;
}
