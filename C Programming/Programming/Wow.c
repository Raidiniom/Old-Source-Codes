#include <stdio.h>
#include <math.h>

int main()
{
    int userInput;

    printf("Choice a main dish: \n1-Chimken \n1-Oink \n1-Beef \n");
    scanf("%d",&userInput);

    switch (userInput)
    {
        case 1:
            printf("You have chosen Chimken");
        break;
        case 2:
            printf("You have chosen Oink");
        break;
        case 3:
            printf("You have chosen Beeeef");
        break;
        case 4:
            printf("Looks like you have chosen a secret dish!");
        break;
        default:
            printf("No Food for you then");
        break;

        return 0;
    }
}
