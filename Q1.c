#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("Input two numbers ");
    scanf("%f %f",&n1,&n2);

    if(n1>n2)
    {
        printf("%.2f is the highest number",n1);
    }
    else
    {
        printf("%.2f is the highest number",n2);
    }

    return 0;
}
