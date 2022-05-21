// 8.2 WAP which will take 2 matrix from user and show the sum of 2 matrix in a new 3rd matrix.
#include <stdio.h>
void sum(int[3][3] , int[3][3]);
void show(int[3][3] , int[3][3],int [3][3]);

void sum(int a[3][3] , int b[3][3])
{
	int c[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	show(a,b,c);
}
void show(int a[3][3], int b[3][3],int c[3][3])
{
	int i,j;
	
	printf("1st Array Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n2nd Array Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of 2 Array Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a1[3][3] = {{1,21,3},{4,51,6},{71,8,9}};
	int b1[3][3] = {{19,8,7},{61,51,4},{3,21,1}};
	
	sum(a1,b1);
	
}
