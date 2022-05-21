#include <stdio.h>
void bubble(int []);
void show(int []);

void bubble(int a[])
{
	int i,temp=0,j;
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
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
	int ar[] = {10,59,47,35,98,45,77,71,17,97};
	
	printf("Unsorted Elements\n");
	show(ar);
	printf("\nSorted Elements using Bubble Sort\n");
	bubble(ar);
	show(ar);
	return 0;
}
