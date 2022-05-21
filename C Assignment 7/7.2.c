#include <stdio.h>
void select(int []);
void show(int []);

void select(int ar[])
{
	int i,j,min=0,temp;
	
	for(i=0;i<10;i++)
	{
		min = i;
		for(j=i+1;j<10;j++)
		{
			if(ar[j]<ar[min])
			{
				min = ar[j];
			}
			temp = ar[i];
			ar[i] = ar[min];
			ar[min] = temp;
		}
	}
}
void show(int b[])
{
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = {1,59,4,375,98,45,77,71,17,7};
	
	printf("Unsorted Elements\n");
	show(a);
	printf("\nSorted Elements using Selection Sort\n");
	select(a);
	show(a);
	
	return 0;
}
