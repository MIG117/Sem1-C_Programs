// WAP to show Linear search using function
#include <stdio.h>
int input();
void linear(int);

int lst[10];

int input()
{
	int i,n,sear;
	printf("Enter the 10 elements in array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&lst[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",lst[i]);
	}
	printf("\n\nEnter the search value: ");
	scanf("%d",&sear);
	
	return sear;  
}
void linear(int x)
{
	int i,flag=0;
	
	for(i=0;i<10;i++)
	{
		if(lst[i]==x)
		{
			flag=1;
			break;	
		}
	}
	if(flag==1)
		printf("\nSearch Found!\nPosition Number: %d",(i+1));
	else
		printf("\nSearch Not Found..!!");	
}

int main()
{
	int a; 
	a = input();
		linear(a);
}
