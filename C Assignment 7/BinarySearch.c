#include <stdio.h>
void bin(int []);
void binsearch(int [],int);
void show();

void binsearch(int ar[],int x)
{
	int u=x,l=0,mid,key,flag=0;
	
	printf("Enter the Key: ");
	scanf("%d",&key);
	while(l<=u)
	{
		mid = (l+u)/2;
		if(ar[mid]==key)
		{
			flag = 1;
			break;
		}
		else if(key>ar[mid])
		{
			l = mid + 1;
		}
		else
		{
			u = mid - 1;
		}
	}
	if(flag==1)
		printf("Search Found\nPosition: %d",mid+1);
	else
		printf("Search Not Found...!!\n");
}
void bin(int ar[])
{
	int i,j,min,temp;
	for(i=0;i<10;i++)
	{
		min = i;
		for(j=(i+1);j<10;j++)
		{
			if(ar[j]<ar[min])
			{
				min = j;
			}
		}
		temp = ar[i];
		ar[i] = ar[min];
		ar[min] = temp;
	}
}

void show(int ar1[])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",ar1[i]);
	}
	printf("\n");
}
int main()
{
	int ar[] = {12,58,69,74,2,35,48,77,22,7};
	
		bin(ar);
	show(ar);
	binsearch(ar,10);
}
