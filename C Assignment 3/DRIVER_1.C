/*
	Write a driver Insured program which will accept the Maritial Status,
	Gender,Age. and check the eligibility according to own requirements
	value to be set and print.

	Input = AGE,GENDER,MARITIAL STATUS
	Output = DRIVER IS INSURED OR NOT INSURED.
	CONCEPT USED = NESTED IF ELSE
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	char gn,mar;
	int age;
	clrscr();
	printf("DRIVER VALIDATION \n");
	printf("Enter the age: ");
	scanf("%d",&age);
	fflush(stdin);
	printf("\nEnter the Gender m or f: ");
	scanf("%c",&gn);
	fflush(stdin);
	printf("\nEnter the Marital Status: \nu = Unmarried \na = Married: ");
	scanf("%c",&mar);

	if(mar=='a')// Married
	{
		printf("Driver is insured\n");
	}
	else
	{
		if(gn=='m')
		{
			if(age>30)
				printf("Driver is Insured\n");
			else
				printf("Diver is Not Insured..! \n");
		}
		else
		{
			if(age>25)
			    printf("Driver is Insured\n");
			else
			    printf("Diver is Not Insured..!\n");
		}
	}
	getch();
	return 0;
}