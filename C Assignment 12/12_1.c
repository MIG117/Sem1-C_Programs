// 1. WAP which will read an existing file and print the following - 
// 	a. Number of Characters.
// 	b. Number of Words.
// 	c. Number of Spaces.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp=NULL;
    char ch;
    int c=0,wd=0,s=0;

    fp = fopen("file1.txt","r");
    if(fp==0) // check for -> is file is present or not
    {
        printf("FILE NOT FOUND!\n");
        exit(0);
    }
    else
    {
        while(1)
        {
            if(ch==EOF)
            {
                break;
            }
            ch = getc(fp); // getc -> returns next char,increments file position indicator.
            if(ch>='a'&& ch<='z' || ch>=65 && ch<=90)
            {
                c++;
            }
            else if(ch==' ')
            {
                wd++;
            }
            else
            {
                s++;
            }
            printf("%c",ch);
        }
        printf("\nNumber of Characters: %d\n",c);
        printf("Number of Words: %d\n",wd+1);
        printf("Number of Spaces: %d\n",wd);
        printf("Number of symbols: %d\n",s-1);
    }
    fclose(fp);
    return 0;
}
