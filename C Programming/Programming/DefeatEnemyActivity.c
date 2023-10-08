
#include <stdio.h>

int main() {

    float enhp=100;
    float enattck=18;
    float attk=8;
    float hp=100;
    float speattk=16;
    int choice;
    int evaded=0;
    char player[50];

    printf("Enter your name Ondering One: ");
    scanf("%s",&player);

    printf("Drean Witch of the Ember Birch Forest has entered the realm! \n");
    for(enhp;enhp>0 && hp>0;)
    {
        printf("Player name: %s \n",player);
        printf("Stats: \n HP= %.2f \n ATTK= %.2f \n Special ATTK: %.2f \n",hp,attk,speattk);
        printf("moveset: [1]Attack [2]Special Attack [3]Evade [4]Buff Attack\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enhp-=attk;
                printf("Enemy health at %.2f \n",enhp);
                voice1();
            break;
            case 2:
                enhp-=speattk;
                printf("Enemy health at %.2f \n",enhp);
                voice2();
            break;
            case 3:
                evaded += 1;
                printf("Enemy health at %.2f \n",enhp);
            break;
            case 4:
                enhp-=attk*.5;
                printf("Enemy health at %.2f \n",enhp);
            break;
            default:
                hp-=enattck;
                printf("THAT I'LL COST YOU PRECIOUS TIME \n");
            break;
        }
        if (evaded>0)
        {
            printf("\nEvaded the Attack \n");
            voice3();
            evaded--;
        }
        else if(evaded<=0)
        {
            hp-=enattck;
            printf("YES YES FEEL THE PAIN!!! \n \n");
        }
    }

    if(enhp<=0 && hp>0)
    {
        printf(" \n \n NO NO NO THIS CAN'T BE HAPPENING!!!  \n \n");
    }
    else if(hp<0)
    {
        printf("\n \nAnother tasty soul to consume later....... \n \n");
    }
    return 0;
}

void voice1()
{
    printf("YOUR ATTACKS MEANS NOTHING! \n \n");
}

void voice2()
{
    printf("*HIGH PITCH SCREAMING* \n \n");
}

void voice3()
{
    printf("COME HERE YOU WORM! \n YOUR DEATH IS HERE! \n \n");
}

void voice4()
{
    printf("YES YES FEEL THE PAIN!!! \n \n");
}
