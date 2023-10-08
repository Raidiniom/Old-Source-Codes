#include <stdio.h>

int main()
{
    int choice;
    printf("Please Select your Starter Pokemon Bulbasaur(1) , Charmander(2) , Squirtle (3), Input using 1, 2 and 3 : \n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("You Select Bulbasaur");
    }
    else if(choice == 2)
    {
        printf("You Select Charmander");
    }
    else if(choice == 3)
    {
        printf("You Select Squirtle");
    }
    else
    {
     printf(" Your Input doesn't have a Starter Pokemon");
    }

    return 0 ;
}
