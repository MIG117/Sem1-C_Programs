#include <stdio.h>
char grade(int);
int main()
{
	int arr[3][3],i,j,total,per;
	char ch;
	
	printf("Enter 3 students Marks\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter the students %d = ",(i+1));
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		total = 0;
		per = 0;
		for(j=0;j<3;j++)
		{
			total = total + arr[i][j];
			per = (total * 100) / 300;
			ch = grade(per);
		}
		printf("\nTotal Marks: %d\n",total);
		printf("Percentage: %d\n",per);
		printf("Grade: %c\n",ch);
	}	
}
char grade(int m)
{
	if(m<0 || m>100)
    {
        return '0';
    }
    else if(m<50)
    {
        return 'F';
    }
    else if(m>50 && m<=60)
    {
        return 'D';
    }
    else if(m>60 && m<=70)
    {
        return 'C';
    }
    else if(m>70 && m<=80)
    {
        return 'B';
    }
    else if(m>80 && m<=100)
    {
        return 'A';
    }
    
}
