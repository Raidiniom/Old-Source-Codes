#include <stdio.h>
#include <stdbool.h>

int main()
{
    //User Info
    char name[25];
    int day;
    int month;
    int year;

    //User belief in Zodiac Signs
    int decision;
    bool belief=true;

    //Loop the app
    int decision1;
    bool onLoop=true;

    do
    {
    printf("Do you believe in Zodiac Signs [1]Yes or [2]No \n");
    scanf("%d",&decision);

        switch(decision)
        {
            case 1:
                belief=true;
                printf("Take those advices with a grain of salt \n");
            break;
            case 2:
                belief=true;
                printf("Looks like this is for fun \n");
            break;
            default:
                belief=false;
                printf("Are you okay??? \n");
            break;
        }
    }
    while(belief==false);

    do
    {
        printf("Enter your name:");
        scanf("%s",&name);
        printf("Enter your birthdate ex. 11 2 2003:");
        scanf("%d %d %d",&day,&month,&year);

        switch(month)
        {
            case 1:
                if(day>=1 && day<=20)
                {
                    printf("You are a Capricon, Lucky color is Brown \n");
                    printf("Your Lucky number is: 5-11-22-29-34-36 \n");
                }
                else if(day>=21 && day<=31)
                {
                    printf("You are an Aquarius, Lucky color is Blue \n");
                    printf("Your Lucky number is: 1-10-23-33-34-36 \n");
                }
            break;
            case 2:
                if(day>=1 && day<=19)
                {
                    printf("You are an Aquarius, Lucky color is Blue \n");
                    printf("Your Lucky number is: 1-10-23-33-34-36 \n");
                }
                else if(day>=20 && day<=29)
                {
                    printf("You are a Pisces, Lucky color is Green \n");
                    printf("Your Lucky number is: 11-12-14-28-35-40 \n");
                }
            break;
            case 3:
                if(day>=1 && day<=20)
                {
                    printf("You are a Pisces, Lucky color is Green \n");
                    printf("Your Lucky number is: 11-12-14-28-35-40 \n");
                }
                else if(day>=21 && day<=31)
                {
                    printf("You are a Aries, Lucky color is Red \n");
                    printf("Your Lucky number is: 2-14-22-26-32-35 \n");
                }
            break;
            case 4:
                if(day>=1 && day<=20)
                {
                    printf("You are a Aries, Lucky color is Red \n");
                    printf("Your Lucky number is: 2-14-22-26-32-35 \n");
                }
                else if(day>=21 && day<=30)
                {
                    printf("You are a Taurus, Lucky color is Pink \n");
                    printf("Your Lucky number is: 5-6-9-33-37-41 \n");
                }
            break;
            case 5:
                if(day>=1 && day<=21)
                {
                    printf("You are a Taurus, Lucky color is Pink \n");
                    printf("Your Lucky number is: 5-6-9-33-37-41 \n");
                }
                else if(day>=22 && day<=31)
                {
                    printf("You are a Gemini, Lucky color is Yellow \n");
                    printf("Your Lucky number is: 3-7-8-10-23-26 \n");
                }
            break;
            case 6:
                if(day>=1 && day<=21)
                {
                    printf("You are a Gemini, Lucky color is Yellow \n");
                    printf("Your Lucky number is: 3-7-8-10-23-26 \n");
                }
                else if(day>=22 && day<=30)
                {
                    printf("You are a Cancer, Lucky color is Silver \n");
                    printf("Your Lucky number is: 3-9-11-13-26-42 \n");
                }
            break;
            case 7:
                if(day>=1 && day<=22)
                {
                    printf("You are a Cancer, Lucky color is Silver \n");
                    printf("Your Lucky number is: 3-9-11-13-26-42 \n");
                }
                else if(day>=23 && day<=31)
                {
                    printf("You are a Leo, Lucky color is Gold \n");
                    printf("Your Lucky number is: 2-9-12-16-27-29 \n");
                }
            break;
            case 8:
                if(day>=1 && day<=22)
                {
                    printf("You are a Leo, Lucky color is Gold \n");
                    printf("Your Lucky number is: 2-9-12-16-27-29 \n");
                }
                else if(day>=23 && day<=31)
                {
                    printf("You are a Virgo, Lucky color is Green \n");
                    printf("Your Lucky number is: 1-3-15-16-27-41 \n");
                }
            break;
            case 9:
                if(day>=1 && day<=22)
                {
                    printf("You are a Virgo, Lucky color is Green \n");
                    printf("Your Lucky number is: 1-3-15-16-27-41 \n");
                }
                else if(day>=23 && day<=30)
                {
                    printf("You are a Libra, Lucky color is Blue \n");
                    printf("Your Lucky number is: 8-13-28-32-39-42 \n");
                }
            case 10:
                if(day>=1 && day<=22)
                {
                    printf("You are a Libra, Lucky color is Blue \n");
                    printf("Your Lucky number is: 8-13-28-32-39-42 \n");
                }
                else if(day>=23 && day<=31)
                {
                    printf("You are a Scorpio, Lucky color is Black \n");
                    printf("Your Lucky number is: 1-12-20-30-37-42 \n");
                }
            break;
            case 11:
                if(day>=1 && day<=22)
                {
                    printf("You are a Scorpio, Lucky color is Black \n");
                    printf("Your Lucky number is: 1-12-20-30-37-42 \n");
                }
                else if(day>=23 && day<=31)
                {
                    printf("You are a Sagittarius, Lucky color is Purple \n");
                    printf("Your Lucky number is: 1-6-15-24-33-4 \n");
                }
            break;
            case 12:
                if(day>=19 && day<=21)
                {
                    printf("You are a Sagittarius, Lucky color is Purple \n");
                    printf("Your Lucky number is: 1-6-15-24-33-4 \n");
                }
                else if(day>=22 && day<=31)
                {
                    printf("You are a Capricon, Lucky color is Brown \n");
                    printf("Your Lucky number is: 5-11-22-29-34-36 \n");
                }
            break;
            default:
                printf("You are stars with no form \n");
            break;
        }

    printf("Hey, %s do you like to go again? [1]Yes or [2]No \n",name);
    scanf("%d",&decision1);

    switch(decision1)
    {
        case 1:
            onLoop=true;
        break;
        case 2:
            onLoop=false;
        break;
        default:
            onLoop=false;
        break;
    }
    }
    while(onLoop);

    return 0;
}
