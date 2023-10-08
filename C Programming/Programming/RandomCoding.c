#include<stdio.h>

int main()
{
    int Input;
    const int Secretnumber = 69;
    // bool Userquesed = true;

    printf("Guese the secret number! \n");
    printf("Only 3 attempts \n");
    for(int Attempt=0; Attempt<3;)
    {
        printf("Enter a number: \n");
        scanf("%d",&Input);

        if(Input != Secretnumber)
        {
            printf("Try again! \n");
            Attempt++;
        }
        else if(Input == Secretnumber)
        {
            printf("You guesed, it's 69 \n");
            Attempt+=4;
        }
    }

    return 0;
}
