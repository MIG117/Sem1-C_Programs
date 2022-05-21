/* Program 2.2
WAP to check a year is leap year or not*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int year;
	
	printf("Enter the year to check it's a Leap Year or Not: \n");
	scanf("%d",&year);

	if((year%4==0) && (year%100!=0) || (year%100==0) && (year%400==0))
	{
		printf("%d is a Leap Year! ",year);
	}
	else
	{
		printf("%d is Not a Leap Year! ",year);
	}
	getch();
	return 0;
}
/*
TEST CASE
1700,1800,1900 --> Not a Leap Year
1600 --> is a Leap year
1904, 1908, 1912, 1916, 1920, 1924,
1928, 1932, 1936, 1940, 1944, 1948,
1952, 1956, 1960, 1964, 1968, 1972,
1976, 1980, 1984, 1988, 1992, 1996,
2000, 2004, 2008, 2012, 2016, 2020*/
