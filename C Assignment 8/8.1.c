// 8.1 WAP which will find out largest and smallest value in the list using function and pointer concepts.
#include <stdio.h>
int max(int * ); //int max(int *)
int min(int *); //int max(int *)
void show(int *);

int max(int *a) // *a
{
	int i,max=0;
	
	for(i=0;i<10;i++)
	{
		if(*a > max) // if(*a > max)
			max = *a; // max = *a
			*a++;
	}
	return max;
}
int min(int *b) //*b
{
	int i,min;
	for(i=0;i<10;i++)
	{
		if(*b < min)
			min = *b; // min = *b
			*b++;
	}
	return min;
}
void show(int *c)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",*c);
		*c++;
	}
}
int main()
{
	int ar[] = {12,68,97,34,66,74,24,1,2,95};
	
	printf("Original Array\n");
	show(ar); // base address no need to use the &ar
	printf("\n\nMaximum value of array: %d",max(ar));
	printf("\nMinimum value of array: %d",min(ar));

	return 0;
}
