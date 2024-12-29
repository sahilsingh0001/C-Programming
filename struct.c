#include<stdio.h>
#include<string.h>

    typedef struct employee
    {
        char name[100];
        int salary;
    } info;
void main()
{

    info detail[3];
    int total = 0;
    for(int i = 0; i<3; i++)
    {
        printf("Enter The Name of Employe and the salary : \n");
        scanf("%s%d", &detail[i].name, &detail[i].salary);
        
        total = total + detail[i].salary;
        

    }

    printf("Total Salary = %d\n", total);
    
    for(int i = 0; i<3; i++)
    {
        for(int j = i+1; j<3;j++)
        {
            if(detail[i].salary>detail[j].salary)
            {
                char temp[100];
                strcpy(temp,detail[i].name);
                strcpy(detail[i].name,detail[j].name);
                strcpy(detail[j].name,temp);
                


                int tem = detail[i].salary;
                detail[i].salary = detail[j].salary;
                detail[j].salary = tem;
                
            }
        }
    }
    for(int i = 0; i<3; i++)
    {
        printf("NAME = %s\nSalary = %d\n", detail[i].name, detail[i].salary);
    }

    printf("The Expansive employe is %s with the salary of %d\n", detail[2].name,detail[2].salary);


    
    

}