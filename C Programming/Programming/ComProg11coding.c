#include<stdio.h>
#include <math.h>

int main()
{

    float fee;
    printf("How much money do you have? \n");
    scanf("%f",&fee);

    int transport;
    printf("Select a method of transportation: \n [1]Jeep, [2]Bus, [3]Train\n");
    scanf("%d",&transport);

    if(transport==1)
    {
        const float fair_price = 11.00;
        printf("You have selected Jeep. \nYour change is %.2f",fee - fair_price);
    }
    else if(transport==2)
    {
        const float fair_price = 13.00;
        printf("You have selected Bus. \nYour change is %.2f",fee - fair_price);
    }
    else if(transport==3)
    {
        const float fair_price = 14.50;
        printf("You have selected Train. \nYour change is %.2f",fee - fair_price);
    }
    return 0;
}
