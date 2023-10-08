#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Please Enter First Integer : ");
    scanf("%d",&a);
    printf("The Value of First Integer is : %d\n ",a);
    printf("Please Enter Second Integer : ");
    scanf("%d",&b);

    printf("The Value of First Integer is : %d\n ",b);

    if(a > b)
    {
        printf("First Value is Bigger than Second Value");
    }
    else
    {
        printf("Second Value is Bigger than First Value");
    }

 return 0;
}
