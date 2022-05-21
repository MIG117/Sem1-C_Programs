// 4. WAP to store 5 values using dynamic memory allocation and display the maximum value from the list. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int max(int [],int);

int max(int ar[],int n1)
{
    int i,m=0;
    m = ar[0];
    for(i=0;i<n1;i++)
    {
        if(ar[i]>m)
        {
            m = ar[i];
        }
    }
    return m;
}
int main()
{
    int n,i;
    int *ptr;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\n%d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\nMaximum value: %d ",max(ptr,n));

    return 0;
}
