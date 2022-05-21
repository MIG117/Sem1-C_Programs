// 9.1 WAP which will accept word from user and check the word is Palindrome or not.
#include <stdio.h>
int main()
{
	char str[50];
	int l=0,i,j,flag=0;
	
	printf("Enter a Word: ");
	scanf("%s",str);
	
	while(str[l]!='\0')
	{
		l++;
	}
	for(i=0,j=l-1; i<j; i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n%s is Palindrome Word\n",str);	
	}
	else
	{
		printf("\n%s is Not a Palindrome Word\n",str);	
	}
	
	return 0;
}
