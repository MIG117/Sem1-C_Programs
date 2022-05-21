#include <stdio.h>
void input();
void stw();
void bubble(int);
void show();

int arr[10];
void input()
{
	int i;
	printf("Enter 10 elements in the array\n");
	for(i=0;i<10;i++)
	{
		printf("Enter value of %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nElements in the array are!");
	show();
}
void stw()
{
	int x;
	printf("\n\nEnter your choice\n");
	printf("Press 1 to Ascending\n");
	printf("Press 2 to Descending\n");
	printf("Choice: ");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1: printf("\nElements Sorted in the Ascending Order");
				bubble(1);
				break;
		
		case 2: printf("\nElements Sorted in the Descending Order");
				bubble(2);
				break;		
		
		default: printf("Invalid input...!");
	}
}
void bubble(int a)
{
	int i,j,temp=0;
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a==1)
			{
				if(arr[i]>arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
		 		}
			}
			else
			{
				if(arr[i]<arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
		 		}
			}
			
		}
	}
	show();
}
void show()
{
	int i;
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	char ch;
	do
	{
		input();
		stw();
		printf("\nDo u want to do again Y/N: ");
		scanf(" %c",&ch);
		if(ch=='Y'|| ch=='y')
			continue;
		else if(ch=='N'|| ch=='n')
			break;
	}while(1);
}
