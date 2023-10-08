#include<stdio.h>

int main()
{
    int a;
    int b;

    printf("Is that food [1] Parishable or [2] Non-Parishable? \n");
    scanf("%d", &a);

    if (a==1)
    {
        printf("Is that food [1] Butcher Meat, [2] Proccessed Meat, or [3] Fragile Food \n");
        scanf("%d", &b);

        if (b==1)
        {
            printf("Considered as Butcher Meat are Poultry, Turkey, and Pork \n");
            printf("Then out the food in a -18 C cooler \n");
        }
        else if (b==2)
        {
            printf("Considered as Proccessed Meat are Hotdog, Ham, and Sausages \n");
            printf("Then out the food in a 4 C cooler \n");
        }
        else if (b==3)
        {
            printf("Considered as Fragile Food are Vegetable, and Fruits \n");
            printf("Then out the food in a 12 C cooler \n");
        }
        else
        {
            printf("Then it is a Non-persihable Food!!!");
        }
    }
    else if (a==2)
    {
        printf("Non-persihable Foods are to be stored in Dry Shelves!");
    }
    else
    {
        printf("Then that is not Food your holding!");
    }

    return 0;
}
