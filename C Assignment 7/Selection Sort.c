#include <stdio.h>
void bin(int []);
void show(int []);

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
	
	printf("Unsorted Array!\n");
	show(ar);
	printf("Sorted Array!\n");
	bin(ar);
	show(ar);
}
