// 5. WAP input the string and find (vowels, space, consonant, punctuation, character, words) and print the following.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50],ch;
	int i,vol=0,wd=0,spc=0,con=0,puc=0;
	
	printf("Enter a String: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		ch = tolower(str[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vol++;
		}
		else if(ch>='a'&&ch<='z')
		{
			con++;
		}
		else if(ch==' ')
		{
			spc++;
		}
		else
		{
			puc++;
		}
	}
	printf("\nVowel: %d\n",vol);
	printf("Consonent: %d\n",con);
	printf("Space: %d\n",spc);
	printf("Punctution: %d\n",puc);
	printf("Word: %d\n",spc+1);
	printf("character: %d\n",vol+con);
	return 0;	
}
