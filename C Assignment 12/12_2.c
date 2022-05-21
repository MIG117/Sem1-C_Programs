// 2. WAP to perform file copy & paste using Command-Line Argument (read from 1st file and write to 2nd file)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{   
    FILE *fr,*fw;
    char ch;
    
    if(argc!=3)
    {
        printf("Too many arguments...!\n");
        exit(0);
    }

    fr = fopen(argv[1],"r");

        if(fr==NULL)
        {
            printf("File not Found!");
            exit(0);
        }

    fw = fopen(argv[2],"w");
    if(fw==NULL)
    {
        printf("File not Found!");
        fclose(fr);
        exit(0);
    }
    while(1)
    {
        ch = fgetc(fr); // -> reads char as an unsigned char,returns EOF
        if(ch==EOF)
        {
            break;
            exit(0);
        }
            fputc(ch,fw); // -> if any error it returns EOF , fputc(char,pointer variable)
    }
    printf("\nFile Copy Successfull!");

    fclose(fw);
    fclose(fr);

    return 0;
}
