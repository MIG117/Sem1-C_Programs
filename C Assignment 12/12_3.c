// 3. WAP which will read multiline string from console (input) and write to the file.
//	note :-  add newline in the file.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    FILE *fp;
    char str[100];

    fp = fopen("file3.txt","a");

    if(fp==NULL)
    {
        printf("File not Found!");
        exit(0);
    }
    printf("Enter the Sentences: ");

    while(strlen(gets(str))>0)
    {
        fputs(str,fp);
        fputs("\n",fp);
    }
    
    fclose(fp);
    return 0;
}
