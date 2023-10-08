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
                printf("Take the advices with a grain of salt \n");
            break;
            case 2:
                belief=true;
                printf("Looks like someone understand this is just a gimmick \n");
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

        switch(year)
        {
            case 1990:
                printf("Your Chinese Zodiac Sign is Horse \n");
                printf("Lucky Color: Green & Yellow. Lucky Number: 2-3-7 \n");
            break;
            case 1991:
                printf("Your Chinese Zodiac Sign is Goat \n");
                printf("Lucky Color: Brown, Red, & Yellow. Lucky Number: 2-7 \n");
            break;
            case 1992:
                printf("Your Chinese Zodiac Sign is Monkey \n");
                printf("Lucky Color: White, Blue, & Gold. Lucky Number: 4-9 \n");
            break;
            case 1993:
                printf("Your Chinese Zodiac Sign is Rooster \n");
                printf("Lucky Color: Gold, Brown, & Yellow. Lucky Number: 5-7-8 \n");
            break;
            case 1994:
                printf("Your Chinese Zodiac Sign is Dog \n");
                printf("Lucky Color: Red, Green, & Purple. Lucky Number: 3-4-9 \n");
            break;
            case 1995:
                printf("Your Chinese Zodiac Sign is Pig \n");
                printf("Lucky Color: Yello, Gray, Brown, & Gold. Lucky Number: 2-5-8 \n");
            break;
            case 1996:
                printf("Your Chinese Zodiac Sign is Rat \n");
                printf("Lucky Color: Blue, Gold, & Green. Lucky Number: 2-3 \n");
            break;
            case 1997:
                printf("Your Chinese Zodiac Sign is Ox \n");
                printf("Lucky Color: White, Yellow, & Green. Lucky Number: 1-4 \n");
            break;
            case 1998:
                printf("Your Chinese Zodiac Sign is Tiger \n");
                printf("Lucky Color: Blue, Grey, & Orange. Lucky Number: 1-3-4 \n");
            break;
            case 1999:
                printf("Your Chinese Zodiac Sign is Rabbit \n");
                printf("Lucky Color: Red, Pink, Purple, & Blue. Lucky Number: 3-4-6 \n");
            break;
            case 2000:
                printf("Your Chinese Zodiac Sign is Dragon \n");
                printf("Lucky Color: Gold, Silver, Grayish, & White. Lucky Number: 1-6-7 \n");
            break;
            case 2001:
                printf("Your Chinese Zodiac Sign is Snake \n");
                printf("Lucky Color: Black, Red, & Yellow. Lucky Number: 2-8-9 \n");
            break;
            case 2002:
                printf("Your Chinese Zodiac Sign is Horse \n");
                printf("Lucky Color: Green & Yellow. Lucky Number: 2-3-7 \n");
            break;
            case 2003:
                printf("Your Chinese Zodiac Sign is Goat \n");
                printf("Lucky Color: Brown, Red, & Yellow. Lucky Number: 2-7 \n");
            break;
            case 2004:
                printf("Your Chinese Zodiac Sign is Monkey \n");
                printf("Lucky Color: White, Blue, & Gold. Lucky Number: 4-9 \n");
            break;
            case 2005:
                printf("Your Chinese Zodiac Sign is Rooster \n");
                printf("Lucky Color: Gold, Brown, & Yellow. Lucky Number: 5-7-8 \n");
            break;
            case 2006:
                printf("Your Chinese Zodiac Sign is Dog \n");
                printf("Lucky Color: Red, Green, & Purple. Lucky Number: 3-4-9 \n");
            break;
            case 2007:
                printf("Your Chinese Zodiac Sign is Pig \n");
                printf("Lucky Color: Yello, Gray, Brown, & Gold. Lucky Number: 2-5-8 \n");
            break;
            case 2008:
                printf("Your Chinese Zodiac Sign is Rat \n");
                printf("Lucky Color: Blue, Gold, & Green. Lucky Number: 2-3 \n");
            break;
            case 2009:
                printf("Your Chinese Zodiac Sign is Ox \n");
                printf("Lucky Color: White, Yellow, & Green. Lucky Number: 1-4 \n");
            break;
            case 2010:
                printf("Your Chinese Zodiac Sign is Tiger \n");
                printf("Lucky Color: Blue, Grey, & Orange. Lucky Number: 1-3-4 \n");
            break;
            case 2011:
                printf("Your Chinese Zodiac Sign is Rabbit \n");
                printf("Lucky Color: Red, Pink, Purple, & Blue. Lucky Number: 3-4-6 \n");
            break;
            case 2012:
                printf("Your Chinese Zodiac Sign is Dragon \n");
                printf("Lucky Color: Gold, Silver, Grayish, & White. Lucky Number: 1-6-7 \n");
            break;
            case 2013:
                printf("Your Chinese Zodiac Sign is Snake \n");
                printf("Lucky Color: Black, Red, & Yellow. Lucky Number: 2-8-9 \n");
            break;
            case 2014:
                printf("Your Chinese Zodiac Sign is Horse \n");
                printf("Lucky Color: Green & Yellow. Lucky Number: 2-3-7 \n");
            break;
            case 2015:
                printf("Your Chinese Zodiac Sign is Goat \n");
                printf("Lucky Color: Brown, Red, & Yellow. Lucky Number: 2-7 \n");
            break;
            case 2016:
                printf("Your Chinese Zodiac Sign is Monkey \n");
                printf("Lucky Color: White, Blue, & Gold. Lucky Number: 4-9 \n");
            break;
            case 2017:
                printf("Your Chinese Zodiac Sign is Rooster \n");
                printf("Lucky Color: Gold, Brown, & Yellow. Lucky Number: 5-7-8 \n");
            break;
            case 2018:
                printf("Your Chinese Zodiac Sign is Dog \n");
                printf("Lucky Color: Red, Green, & Purple. Lucky Number: 3-4-9 \n");
            break;
            case 2019:
                printf("Your Chinese Zodiac Sign is Pig \n");
                printf("Lucky Color: Yello, Gray, Brown, & Gold. Lucky Number: 2-5-8 \n");
            break;
            case 2020:
                printf("Your Chinese Zodiac Sign is Rat \n");
                printf("Lucky Color: Blue, Gold, & Green. Lucky Number: 2-3 \n");
            break;
            case 2021:
                printf("Your Chinese Zodiac Sign is Ox \n");
                printf("Lucky Color: White, Yellow, & Green. Lucky Number: 1-4 \n");
            break;
            case 2022:
                printf("Your Chinese Zodiac Sign is Tiger \n");
                printf("Lucky Color: Blue, Grey, & Orange. Lucky Number: 1-3-4 \n");
            break;
            case 2023:
                printf("Your Chinese Zodiac Sign is Rabbit \n");
                printf("Lucky Color: Red, Pink, Purple, & Blue. Lucky Number: 3-4-6 \n");
            break;
            case 2024:
                printf("Your Chinese Zodiac Sign is Dragon \n");
                printf("Lucky Color: Gold, Silver, Grayish, & White. Lucky Number: 1-6-7 \n");
            break;
            case 2025:
                printf("Your Chinese Zodiac Sign is Snake \n");
                printf("Lucky Color: Black, Red, & Yellow. Lucky Number: 2-8-9 \n");
            break;
            case 2026:
                printf("Your Chinese Zodiac Sign is Horse \n");
                printf("Lucky Color: Green & Yellow. Lucky Number: 2-3-7 \n");
            break;
            case 2027:
                printf("Your Chinese Zodiac Sign is Goat \n");
                printf("Lucky Color: Brown, Red, & Yellow. Lucky Number: 2-7 \n");
            break;
            case 2028:
                printf("Your Chinese Zodiac Sign is Monkey \n");
                printf("Lucky Color: White, Blue, & Gold. Lucky Number: 4-9 \n");
            break;
            case 2029:
                printf("Your Chinese Zodiac Sign is Rooster \n");
                printf("Lucky Color: Gold, Brown, & Yellow. Lucky Number: 5-7-8 \n");
            break;
            case 2030:
                printf("Your Chinese Zodiac Sign is Dog \n");
                printf("Lucky Color: Red, Green, & Purple. Lucky Number: 3-4-9 \n");
            break;
            case 2031:
                printf("Your Chinese Zodiac Sign is Pig \n");
                printf("Lucky Color: Yello, Gray, Brown, & Gold. Lucky Number: 2-5-8 \n");
            break;
            default:
                printf("??? ??? \n");
            break;
        }
    printf("Hey Do you want to know another Zodiac Sign with different year? [1]Yes or [2]No \n");
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
