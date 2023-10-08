#include<stdio.h>

int main()
{
    int x;
    int count=1;
    int row;

    printf("Enter number of row: \n");
    scanf("%d", &row);



    while(x>0)
    {
        x=0;
        while(x<=(row-count))
        {
            printf(" ");
            x++;
        }
        x=0;
        while(x<(2*count-1))
        {
            printf("*");
            x++;
        }
        printf("\n");
        count--;
    }

    return 0;
    //by: Voltaire Ratilla
}
