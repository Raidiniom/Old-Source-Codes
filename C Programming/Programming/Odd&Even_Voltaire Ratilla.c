#include<stdio.h>
#include<stdbool.h>

int main()
{
    int Usernumber;
    bool onLoop=true;

    do
    {
        printf("Input any number you like we'll tell you if it is Odd or Even. \n");
        printf("Type the number: \n");
        scanf("%d",&Usernumber);

        if(Usernumber%2==0)
        {
        printf("It's Even \n \n");
        }
        else if(Usernumber%3==0)
        {
        printf("It's Odd \n \n");
        }
        else
        {
        printf("It's Odd \n \n");
        }
    }
    while(onLoop);

    return 0;
}
