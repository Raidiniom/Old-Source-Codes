#include <stdio.h>

int main()
{
    int choice;

    printf("Choose between 1 / 2: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Choice #1!");
    }
    else if (choice == 2)
    {
        printf("Choice #2!");
    }
    else
    {
        printf("Not a Choice!!!");
    }

    return 0;
}
