#include <stdio.h> //1! + 3! + 5!
int main()
{
	int i,n,r,f=1,cpy,s=0,sm=0;

	printf("Enter a number: ");
	scanf("%d",&n);
        cpy = n;        
		while(n>0)
		{
			r = n % 10;
			f = 1; // reset
	
			for(i=1;i<=r;i++)
			{
				f = f * i;
			}
			sm = sm + f;			
			n = n / 10;
		}
		if(sm==cpy)
	        printf("%d is Special Number",sm);
	   else 
	        printf("%d is not a Special Number",sm);
	return 0;
}
