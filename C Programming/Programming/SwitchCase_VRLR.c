#include <stdio.h>
#include <stdbool.h>

int main()
{
    //user name
    char username[50];

    //choosing zodiac type
    int option;
    int zodiactype;
    bool goagain=true;

    //month number
    int month;


    printf("Hello!, This a Zodiac Sign & Prediction Teller!!! \n");
    printf("Enter Your Name:");
    scanf("%s",&username);

    do
    {
        printf("%s What type of Zodiac Signs do you like [1] Roman or [2] Chinese \n",username);
        scanf("%d",&zodiactype);

        if(zodiactype==1)
        {
            printf("%s, you chose the Roman Zodiac Signs \n",username);
            printf("Enter the number of the month when you were born. Ex. 1=January \n");
            scanf("%d",&month);

            switch(month)
            {
                case 1:
                    printf("Aquarius \n");
                break;
                case 2:
                    printf("Pisces \n");
                break;
                case 3:
                    printf("Aries \n");
                break;
                case 4:
                    printf("Taurus \n");
                break;
                case 5:
                    printf("Gemini \n");
                break;
                case 6:
                    printf("Cancer \n");
                break;
                case 7:
                    printf("Leo \n");
                break;
                case 8:
                    printf("Virgo \n");
                break;
                case 9:
                    printf("Libra \n");
                break;
                case 10:
                    printf("Scorpio \n");
                break;
                case 11:
                    printf("Sagittarius \n");
                break;
                case 12:
                    printf("Capricon \n");
                break;
                default:
                    printf("Maybe a far and unknown constellation /n");
                break;
            }

        }
        else if(zodiactype==2)
        {
            printf("%s, you chose the Chinese Zodiac Signs \n",username);
            printf("Enter the number of the month when you were born. Ex. 1=January \n");
            scanf("%d",&month);

            switch(month)
            {
                case 1:
                    printf("Ox \n");
                break;
                case 2:
                    printf("Tiger \n");
                break;
                case 3:
                    printf("Rabbit \n");
                break;
                case 4:
                    printf("Dragon \n");
                break;
                case 5:
                    printf("Snake \n");
                break;
                case 6:
                    printf("Horse \n");
                break;
                case 7:
                    printf("Goat \n");
                break;
                case 8:
                    printf("Monkey \n");
                break;
                case 9:
                    printf("Rooster \n");
                break;
                case 10:
                    printf("Dog \n");
                break;
                case 11:
                    printf("Pig \n");
                break;
                case 12:
                    printf("Rat \n");
                break;
                default:
                    printf("Maybe a far and unknown constellation /n");
                break;
            }
        }
        else
        {
            printf("Looks like there is no such zodiac signs! \n");
        }


        printf("Do you want to go again [1] Yes or [2] No \n");
        scanf("%d",&option);

        if(option==1)
        {
            goagain=true;
        }
        else if(option==2)
        {
            goagain=false;
        }
        else
        {
            goagain=false;
        }
    }
    while(goagain);

    return 0;
}
