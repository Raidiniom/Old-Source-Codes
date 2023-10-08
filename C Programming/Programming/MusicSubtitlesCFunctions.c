#include<stdio.h>

int main()
{
    // Link: https://www.youtube.com/watch?v=eKrJ6hb5Poo - Beer Never Broke My Heart by Luke Combs
    int hitplay;

    printf("Do you want to the Music??? [1]YES or [2]No \n");
    scanf("%d",&hitplay);
    printf("\n *---*---*---*---*---*---*---*---*---* \n");

    if(hitplay==1)
    {
        printf("*---*---*Sing along to the music*---*---* \n");
        sleep(15);
        verse1();
        LongNeckIceColdBeer();
        sleep(5);
    }
    else if(hitplay==2)
    {
        printf("MMMhmm you are missing out on a good country song tho! \n");
    }

    return 0;
}

void verse1()
{
    printf("I've had a largemouth bass, bust my line \n");
    sleep(5);
    printf("A couple of beautiful girls tell me goodbye \n");
    sleep(5);
    printf("Trucks break down, dogs run off \n");
    sleep(3);
    printf("Politicians lie, been fired by the boss \n");
    sleep(4);
    printf("It takes one hand \n");
    sleep(3);
    printf("To count the things I can count on \n");
    sleep(4);
    printf("No, there ain't much, man \n");
    sleep(4);
    printf("That ain't ever let me down \n");
    sleep(5);
}

void LongNeckIceColdBeer()
{
    printf("Longneck, ice cold beer never broke my heart \n");
    sleep(5);
    printf("Like diamond rings and football teams \n");
    sleep(5);
    printf("Have torn this boy apart \n");
    sleep(3);
    printf("Like a neon dream it just dawned on me \n");
    sleep(4);
    printf("The bars and this guitar \n");
    sleep(4);
    printf("And longneck, ice cold beer never broke my heart \n");
    sleep(7);
}
