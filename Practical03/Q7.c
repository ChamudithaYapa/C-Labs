#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b_salary,gross_monthly_remuneration,service_years,bonus,additional_allowence;
    char city;
    printf("Enter your city,'c' for colombo and any other letter for other district :");
    scanf("%c",&city);
    printf("Enter your basic salary = ");
    scanf("%f",&b_salary);

    printf("Enter your service years = ");
    scanf("%f",&service_years);

    //calculating bonus
    if(b_salary<25000)
    {
        bonus=b_salary*10/100;
    }
    else if(b_salary<50000)
    {
        bonus=b_salary*12/100;
    }
    else
    {
        bonus=b_salary*15/100;
    }

    if(service_years>5)
    {
        additional_allowence=b_salary*10/100;
    }
    if(city=='c')
    {
        additional_allowence+=2500;
    }
    gross_monthly_remuneration=b_salary+bonus+additional_allowence;
    printf("Your gross remuneration is %.2f",gross_monthly_remuneration);


    return 0;
}
