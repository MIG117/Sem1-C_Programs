/*
2. WAP which will accept record of 5 students (Name,Roll/ID,Marks of 3-4 subject) and
 1 element must be array of integers with 3-4 marks & display the all relevant information 
 of the students with total marks,percentage and the student with highest marks.
*/
#include <stdio.h>
#include <conio.h>
struct student
{
    char name[25];
    int roll;
    int marks[3];
    float per[5];
};
int main()
{
    struct student s[5];

    int i,j,n;
    float max;
    int cmark[5],total=0;

    for(i=0;i<5;i++)
    {
        printf("\nStudent %d\n\n",i+1);

        printf("Enter the Name: ");
        scanf("%s",s[i].name);

        printf("\nEnter the roll: ");
        scanf("%d",&s[i].roll);

        printf("\nEnter the 3 subject marks: ");
        for(j=0;j<3;j++)
        {
            printf("\nSubject %d: ",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }// INPUT OK

    for(i=0;i<5;i++)
    {
         for(j=0;j<3;j++)
         {
             total = total + s[i].marks[j];
         }
        cmark[i] = total;
        s[i].per[i] = (total * 100) / 300;
        total=0;
    }
    for(i=0;i<5;i++)
    {
        max = cmark[0];
        if(cmark[i]>max)
        {
            max = cmark[i];
            n = i;
        }
        printf("\n---------Output Student %d--------",i+1);
        printf("\nName: %s\tRoll: %d\tMarks: ",s[i].name,s[i].roll);
        for(j=0;j<3;j++)
        printf("%d\t",s[i].marks[j]);
        printf("\tTotal: %d\tPercentage: %.2f\n",cmark[i],s[i].per[i]);
    }
    printf("\nHighest Student Name: %s",s[n].name);
    printf("\nHighest Student Total Marks: %.2f",max);
    
    return 0;
}