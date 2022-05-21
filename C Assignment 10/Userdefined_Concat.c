// 10.1. String Concatenation user defined.
#include <stdio.h>
void Strcat(char *,char *);

int main()
{
	char str1[100],str2[100];
	
	printf("Enter the 1st String: ");
	gets(str1);
	printf("\nEnter the 2nd String: ");
	gets(str2);	
	
	Strcat(str1,str2);
	
	printf("The Concatination String: ");
	puts(str1);
	return 0;	
}

void Strcat(char *s1,char *s2)
{
	char *s3;
	
	while(*s1!='\0')
	{
		s1++;
	}
	while(*s2!='\0')
	{
		*s1=*s2;
		*s1++;
		*s2++;
	}
	*s1='\0';	
}
