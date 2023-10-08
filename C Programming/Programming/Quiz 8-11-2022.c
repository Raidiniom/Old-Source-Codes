#include<stdio.h>

int main()
{
    int x;
    int y=1;
    int row;

    printf("Enter value of n: ");
    scanf("#d",&row);

    while(x<=row)
    {
        x=row/2;
        while(y<row-1)
        {
            printf("");
            y+=2;
        }
        while(y<=x)
        {
            printf("*");
            y++;
        }
        while(y<=row-x)
        {
            printf(" ");
            y++;
        }
        while(y<=x)
        {
            printf("*");
            y++;
        }
        printf("\n");
        x+=2;
    }

    while(x>=1)
    {
        x=row;
        y=x;
        while(y<row)
        {
            printf("*");
            y++;
        }
        x=row;
        while(y<=(x*2)-1)
        {
            printf("*");
            y++;
        }
        printf("\n");
        y--;
    }

    return 0;
    //THIS FAILED!!!
    //Problem: program declaration is not put outside the while loop
}
