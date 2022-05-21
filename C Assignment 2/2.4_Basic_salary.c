/* Program 2.4
WAP which will accept the BS = Basic Salary from user and	calculate:-
	 DA = Dearness Allowence <= (BS x 80 / 100) OR 80%
	 HRA = House Rent Allowence <= (BS x 20 / 100) OR 20%
	 Gross Salary <= (BS + DA + HRA )

[SLAB]
BS>=50000, DA 50% on BS, HR 20% on BS
BS>=30000, DA 40% on BS, HR 15% on BS
BS>=20000, DA 30% on BS, HR 12% on BS
BS>=10000, DA 20% on BS, HR 10% on BS
BS<10000,  DA 10% on BS, HR 8%  on BS

INPUT  => Basic Salary
OUTPUT =>Basic Salary,Dearness Allowence,House Rent Allowence,Gross Salary
*/
#include <stdio.h>
int main()
{
	int bs;
	float da,hra,gs;
	
	printf("Enter your Salary: ");
	scanf("%d",&bs);
	
	if(bs>=50000)
	{
		da = bs *50/100;
		hra = bs * 20/100;
	}
	else if(bs>=30000)
	{
		da = bs * 40/100;
		hra = bs * 15/100;
	}
	else if(bs>=20000)
	{
		da = bs * 30/100;
		hra = bs * 12/100;
	}
	else if(bs>=10000)
	{
		da = bs * 20/100;
		hra = bs * 10/100;
	}
	else 
	{
		da = bs * 10/100;
		hra = bs * 8/100;
	}
	gs = bs + da + hra;

	printf("\nBasic Salary:         %d\n",bs);
	printf("Dearness Allowence:   %.2f\n",da);
	printf("House Rent Allowence: %.2f\n",hra);
	printf("Gross Salary:         %.2f\n",gs);
	
	return 0;
}
