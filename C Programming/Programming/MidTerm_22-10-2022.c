#include<stdio.h>
#include<stdbool.h>

int main()
{
    int Usernumber;
    int option;
    bool onLoop=true;

    int rev=0;
    int rem;
    int sameUsernum;

    do
    {
        printf("Enter an integer:");
        scanf("%d",&Usernumber);
        sameUsernum=Usernumber;
        while(sameUsernum!=0)
        {
            rem=sameUsernum%10;
            rev=rev*10+rem;
            sameUsernum/=10;
        }
        printf("\n \n------------ \n");
        printf("%d%d \n \n",Usernumber,rev);


        printf("Hey do you want to Enter another number again [1]Yes / [2]No \n");
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
