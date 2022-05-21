/* Program 2.3
 Program to Give Grades according to Marks and Percentage of 4 subjects */
#include <stdio.h>
int main()
{
	int s1,s2,s3,s4,t_marks,c=0;
	float per;
	
	printf("Enter the marks of 4 subjects  \n");
	printf("\n1st subject: ");
	scanf("%d",&s1);
	printf("\n2nd subject: ");
	scanf("%d",&s2);
	printf("\n3rd subject: ");
	scanf("%d",&s3);
	printf("\n4th subject: ");
	scanf("%d",&s4);
	
	t_marks = s1 + s2 + s3 + s4;
	per = (float)t_marks / 4;     /*Implicit Type Casting*/
		
			if(per<=100)
			{
				if(per>=90 && per<=100) {
					printf("\nGrade: A+ Excellent \n");
				} else if(per>=80 && per<90) {
					printf("\nGrade: A ");
				} else if(per>=60 &&per<80 ) {
					printf("\nGrade: B");
				} else if(per>=50 && per<60) {
					printf("\nGrade: C");
				} else if(per>=40 && per<50) {
					printf("\nGrade: D");
				} else {
					printf("\nFailed...!!");
				}
				printf("\nOut of 400 Total Marks: %d",t_marks);
				printf("\nPercentage: %.2f%% \n",per);
			} else {
				printf("\nInvalid Subjects Marks Entered..!");
			}
			
	return 0;
	}
