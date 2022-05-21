// 9.3 WAP to input String from user and display the string using pointer.
#include <stdio.h>
int main()
{
	char str[50];
	char *ptr;
	
	
	printf("Enter the sentence: ");
	gets(str);
	
	ptr = str;
	
	printf("\nThe String is: ");
		while(*ptr!='\0')
		{
			printf("%c",*ptr);
			ptr++;
		}
		
	return 0;
}
