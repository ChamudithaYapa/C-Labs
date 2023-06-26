#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,highest,smallest;
    printf("Input three integer numbers\n");
    printf("First number = ");
    scanf("%d",&n1);
    printf("Second number = ");
    scanf("%d",&n2);
    printf("Third number = ");
    scanf("%d",&n3);

    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("The highest number is %d",n1);
        }
        else
        {
            printf("The highest number is %d",n3);
        }
    }
    else
    {
        if(n3>n2)
        {
            printf("The highest number is %d",n3);
        }
        else
        {
            printf("The highest number is %d",n2);
        }
    }

    printf("\n");

    if(n1<n2)
    {
        if(n1<n3)
        {
            printf("The smallest number is %d",n1);
        }
        else
        {
            printf("The smallest number is %d",n3);
        }
    }
    else
    {
        if(n2<n3)
        {
            printf("The smallest number is %d",n2);
        }
        else
        {
            printf("The smallest number is %d",n3);
        }
    }


    return 0;
}
