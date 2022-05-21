// 5. WAP which will read multiline strings from the existing file and display the Strings.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("file1.txt","r");
    
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!\n");
        exit(0);
    }
    while(fgets(str,sizeof(str),fp)!=NULL) // fgets -> reads & stores the character until new line occurs
    {
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}
