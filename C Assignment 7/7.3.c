#include <stdio.h>
int binsear(int [],int,int);

int binsear(int ar[], int key,int size)
{
	int ub=size,lb=0,mid,flag=0;
	while(lb<=ub)
	{
		mid = (ub+lb)/2;
		if(ar[mid]==key)
		{
			flag = 1;
			break;
		}
		else if(key>ar[mid])
		{
			lb = mid + 1;
		}
		else
		{
			ub = mid - 1;
		}
	}
	if(flag==1)
	{
		return (mid+1);
	}	
	else
		return (0);	
}
int main()
{
	int i=0,key,x;
	
	int ar[] = {10,20,30,40,50,60,70,80,90,100};
	for(i=0;i<10;i++)
		printf("%d ",ar[i]);
		
	printf("\nEnter the Key: ");
	scanf("%d",&key);
	
	x = binsear(ar,key,10);
	
	if(x>0)
		printf("\nSearch Found\nPosition: %d",x);
	else
		printf("\nSearch Not Found");
}
