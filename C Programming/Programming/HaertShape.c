#include<stdio.h>

int main()
{
    int x;
    int y;
    int row;

    printf("Number of row/s: ");
    scanf("%d",&row);

    x=row/2;
    while(x<=row)
    {
        y=1;
        while(y<row-x)
        {
            printf(" ");
            y+=2;
        }
        y=1;
        while(y<=x)
        {
            printf("*");
            y++;
        }
        y=1;
        while(y<=row-x)
        {
            printf(" ");
            y++;
        }
        y=1;
        while(y<=x)
        {
            printf("*");
            y++;
        }
        printf("\n");
        x+=2;
    }

    x=row;
    while(x>=1)
    {
        y=x;
        while(y<=row)
        {
            printf(" ");
            y++;
        }
        y=1;
        while(y<=(x*2)-1)
        {
            printf("*");
            y++;
        }
        printf("\n");
        x--;
    }

    return 0;
}
