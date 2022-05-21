#include <stdio.h> //WAP to draw Pattern
void main()
{
        int i,n,j;
        
        printf("Enter a number: ");
        scanf("%d",&n);
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for(j=i;j>0;j--)
            {
                printf(" %c",j+64);
            }
            for(j=2;j<=i;j++)
            {
                printf(" %c",j+64);
            }
            printf("\n");
        }
}
/*
		   A
	  	 B A B
       C B A B C
*/
