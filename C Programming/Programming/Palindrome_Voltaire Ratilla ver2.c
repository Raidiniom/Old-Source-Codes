#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int num;
    int numa;
    int remain;
    int reverse=0;

    int option;
    bool onLoop=true;

    do
    {
    printf("Inputt a 3 or more digit number and It'll tell you if it is a Palindrome or not! \n");
    printf("Enter number here! \n");
    scanf("%d",&num);
    num=numa;

    while(num>0)
    {
        remain=num%10;
        reverse=reverse*10+remain;
        num=num/10;
    }

    if(numa==reverse)
    {
        printf("The number is Palindrome \n");
    }
    else
    {
        printf("The number is not a Palindrome \n");
    }

    printf("Do yo want to enter another a 3 or more digit number? [1]YES or [2]NO \n");
    scanf("%d",&option);

    if(option==1)
    {
        onLoop=true;
    }
    else if(option==2)
    {
        onLoop=false;
    }
    else
    {
        onLoop=false;
    }
    }
    while(onLoop);

    return 0;
}
