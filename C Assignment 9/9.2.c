// 9.2 WAP which will accept a String from user and display the length of the String.
#include <stdio.h>
int main()
{
	char str[50];
	int i=0;
	
	printf("Enter the sentence: ");
	gets(str);
	
		while(str[i]!='\0')
		{
			i++;	
		}
		printf("\nLength of the String is: %d",i);
	return 0;
}
