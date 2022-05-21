/*
6.1 WAP to enter 3 subjects marks of 3 students in an array and display individually of each students - > total marks , percentage ,and grade
	(Grade Process perform by using function)
	Grade Slab is your own choice
*/
#include <stdio.h>
void stdlist(int,int,char);
char grade(int );
void input();
void output();

int mark[3][3];

char grade(int mk)
{
	if(mk<0 || mk>100)
    {
        return 'X';
    }
    else if(mk<50)
    {
        return 'F';
    }
    else if(mk>50 && mk<=60)
    {
        return 'D';
    }
    else if(mk>60 && mk<=70)
    {
        return 'C';
    }
    else if(mk>70 && mk<=80)
    {
        return 'B';
    }
    else if(mk>80 && mk<=100)
    {
        return 'A';
    }
    
}
void input()
{
	int i,j;
	
	printf("Enter Marks of 3 Students\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter 3 Subject Marks of Student Number %d: ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&mark[i][j]);
		}
	}
}
void output()
{
	char ch;
	int i,j,total,per;
	for(i=0;i<3;i++)
	{
			total=0;
			per=0;
			ch='\0';
			
		printf("\n  Student Number %d \n",i+1);
		printf("|------------------|");
		for(j=0;j<3;j++)
		{	
			total = total + mark[i][j];
			per = (total * 100) / 300;
			ch = grade(per);
			if(j==2)
				stdlist(total,per,ch); // This will only print the values 
			else
				continue;
		}
		printf("\n");
	}	
}
void stdlist(int total1,int per1,char ch1)
{
	printf("\nTotal Marks: %d\n",total1);
	printf("Percentage: %d%%\n",per1);
	printf("Grade: %c\n",ch1);
}

int main()
{
	input();
	output();
}
