#include <stdio.h>

int main()
{
    int i,n,f=1;
    
    printf("Enter a number: \n");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        f = f * i;
    }
    printf("Factorial of %d is is %d ",n,f);

    return 0;
}