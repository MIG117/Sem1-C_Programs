#include <stdio.h>
int main()
{
	int n,i,j,k,l,c=65,x,m,p;
	
	printf("Enter the steps: ");
	scanf("%d",&n);
	
	for(i=0,m=70;i<n;i++,m--)
	{  	
		p=m;
		c=65;
		for(j=1;j<=n-i;j++)
		{
			printf("%c",c++);
		}
		for(k=0;k<i*2-1;k++)
		{
			printf(" ");
		}
		for(l=71-i;l>=65;l--)
            if(l!=71)
            printf("%c",l);
		
		printf("\n");
	}
}
