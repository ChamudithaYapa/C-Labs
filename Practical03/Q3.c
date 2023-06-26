#include <stdio.h>
#include <stdlib.h>

int main()
{
    char emp_name[50];
    float basic_salary,increment,new_salary;
    printf("Enter employee name = ");
    scanf("%s",&emp_name);
    printf("Enter basic salary = ");
    scanf("%f",&basic_salary);

    if(basic_salary<5000)
    {
        if(basic_salary==5000)
        {
            new_salary=basic_salary+basic_salary*10/100;
            printf("Your new salary is %.2f",new_salary);
        }
        else
        {
           new_salary=basic_salary+basic_salary*5/100;
           printf("Your new salary is %.2f",new_salary);
        }
    }
    else
    {
        if(basic_salary<10000)
        {
            new_salary=basic_salary+basic_salary*10/100;
            printf("Your new salary is %.2f",new_salary);
        }
        else
        {
            new_salary=basic_salary+basic_salary*15/100;
            printf("Your new salary is %.2f",new_salary);
        }
    }

    return 0;
}
