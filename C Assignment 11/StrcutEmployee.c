// 1. WAP to input 5 employees information(Name,ID,Salary) with salary and display the employee informaion and
// name of highest paid salary person.

#include <stdio.h>
#include <conio.h>
struct emp 
{
    char name[15]; 
    int id; 
    float salary;
};
int main()
{
    int i,j,n;
    float max;
    char Hname[15];
    struct emp e[5];

        printf("Enter name ID salary of 5 employees Record\n");
        for(i=0;i<5;i++)
        {
            printf("Enter Record of employee :%d \n",i+1);
            printf("Name: ");
            scanf("%s",&e[i].name);

            printf("ID: ");
            scanf("%d",&e[i].id);

            printf("Salary: ");
            scanf("%f",&e[i].salary);
        }                               // INPUT OK
      
        for(j=0;j<5;j++)
        {
            max = e[0].salary;
            
            if(max < e[j].salary)
            {
                max = e[j].salary;
                n = j;
            }
            printf("\n---------Output Employee %d--------",j+1);
            printf("\nName: %s\tID: %d\tSalary: Rs: %.2f\n",e[j].name,e[j].id,e[j].salary);    // dot operator is used
        }
        printf("\nHighest Person salary: %.2f",max);
        printf("\nHighest Person Name: %s",e[n].name);

    return 0;
}
