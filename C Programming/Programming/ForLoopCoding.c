#include<stdio.h>

int main()
{
    int gun;
    int pick;

    printf("Your base iss under-attack pick an Anti-Air gun!!!\n");
    printf("[1]15 mm [2]30 mm [3]50 BMG\n");
    scanf("%d", &pick);

    if(pick==1)
    {
        for(gun=0;gun<=9;gun++)
        {
            printf("pew pew\n");
        }
    }
    else if(pick==2)
    {
        for(gun=0;gun<=6;gun++)
        {
             printf("pew pew\n");
        }
    }
    else if(pick==3)
    {
        for(gun=0;gun<=3;gun++)
        {
            printf("pew pew\n");
        }
    }
    else
    {
         printf("Your base has fallen!!!");
    }
    return 0;
}
