// Write a program to accept a number of month and print the season
// according to month number.
// using the following slabs
/*
Winter - December to January
Spring - February to March
Summer - April to June
Monsoon - July to September
Autumn - October to November
*/
#include <stdio.h>
int main()
{
	int num;
	clrscr();
	printf("Enter the number of month to know the season: ");
	scanf("%d",&num);

	switch(num)
	{
		case 1: printf("January: Its Winter \n");
			  break;
		case 2: printf("February: Its Spring \n");
			  break;
		case 3: printf("March: Its Spring \n");
			  break;
		case 4: printf("April: Its Summer \n");
			  break;
		case 5: printf("May: Its Summer \n");
			  break;
		case 6: printf("June: Its Summer \n");
			  break;
		case 7: printf("July: Its Monsoon \n");
			  break;
		case 8: printf("August: Its Monsoon \n");
			  break;
		case 9: printf("September: Its Monsoon \n");
			  break;
		case 10: printf("October: Its Autumn \n");
			  break;
		case 11: printf("November: Its Autumn \n");
			  break;
		case 12: printf("December: Its Winter \n");
			  break;
		default: printf("Invalid Month Entered..!\n");
	  }
	  getch();
   return 0;
}