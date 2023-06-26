#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,result;
    printf("Enter two numbers\n");
    printf("First number = ");
    scanf("%d",&n1);
    printf("Enter second number = ");
    scanf("%d",&n2);

    if(n1%n2==0)
    {
        printf("%d is a multiple of %d",n1,n2);
    }
    return 0;
}
