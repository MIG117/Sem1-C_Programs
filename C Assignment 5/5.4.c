// 5.4. Krishnamurthy Number (Special No) using function.
#include <stdio.h>
int input();
int fact(int);
int spec(int);
void show(int);

		int cpy;

int input()
{
	int n;
		
	printf("Enter a number: ");
	scanf("%d",&n);
    
	return n;   
}

int fact(int r)
{
		int i,f=1;
		
		for(i=1;i<=r;i++)
			{
				f = f * i;
			}
	return f;		
}
int spec(int n)
{
	int f1,r,sum=0;
	
	cpy = n;        
		while(n>0)
		{
			r = n % 10;
			f1 = fact(r);		
			sum = sum + f1;			
			n = n / 10;
		}
	return sum;		
}
void show(int s1)
{
	if(s1==cpy)
	    printf("%d is Special Number",s1);
	else 
	    printf("%d is not a Special Number",s1);
}
int main()
{
	int a,b;
	
	 a = input();
	 b = spec(a);
	 	show(b);	 
}

