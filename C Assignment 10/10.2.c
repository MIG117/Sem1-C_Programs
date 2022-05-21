//10.2 Telephone Directory (Name with corresponding phone numbers.)
#include <stdio.h>
//#include <string.h>
void Search(char [10][25],long int[10], char[10]);

void Search(char names[10][25], long int numbers[10][10], char name[10])
{
	int i,j,x;
	
	for(i=0;i<10;i++)
	{
		x = strcmp(names[i],name[i]);
		if(x==0)
		{
			break;
		}
	}
	printf("Name: %s\nPhone: ",names[i]);
	for(j=0;j<10;j++)
	{
		printf("%d",numbers[i][j]);
	}
}
int main()
{
	char Names[10][25] = {"amit","kushal","gurmit","aman","santosh"};
	long int numbers[10][10] = {8296100215,7832777284,9856285061,9970490477,7246280110};
	char Sname[10];
	
	printf("Enter the name: ");
	gets(Sname);
	
	Search(Names,numbers,Sname);
	
	return 0;
}
