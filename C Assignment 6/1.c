#include <stdio.h>
void main()
{
    int i,j,c;
	
	for(i=0;i<=7;i++)
	{ c=70;
		for(j=0;j<=7;j++)
		{
			if(j>i)	
				printf("%c",c--);
			else
				printf("*");	
		}	
		printf("\n");
	}    
}
