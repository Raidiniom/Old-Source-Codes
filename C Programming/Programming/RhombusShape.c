#include<stdio.h>

int main()
{
    int row;
    int x;
    int y;

    printf("Enter the size for the Rhombus: ");
    scanf("%d",&row);

    x=0;
    while(x<row)
    {
        y=0;
        while(y<x)
        {
            printf(" ");
            y++;
        }
        y=0;
        while(y<row)
        {
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
