#include<stdio.h>

int main()
{
    int side;
    int x;
    int y;

    printf("Enter the size for the square: ");
    scanf("%d",&side);

    x=0;
    while(x<side)
    {
        y=0;
        while(y<side)
        {
            if(x==0 || x==side-1 || y==0 || y==side-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        y++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
