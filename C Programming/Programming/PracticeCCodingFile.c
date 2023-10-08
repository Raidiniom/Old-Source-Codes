#include<stdio.h>

int main()
{

    int x;
    int space;
    int rows;
    int star=0;

    printf("Enter number of row: ");
    scanf("%d",&rows);

    x=1;
    while(x<=rows)
    {
        space=1;
        while(space<=rows-x)
        {
            printf(" ");
            space++;
        }
        while(star!=(2*x-1))
        {
            if(star==0 || star==2*x-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        star++;
        }
        star=0;
        printf("\n");
        x++;
    }
    rows--;

    x=rows;
    while(x>=1)
    {
        space=0;
        while(space<=rows-x)
        {
            printf(" ");
            space++;
        }
        star=0;
        while(star!=(2*x-1))
        {
            if(star==0 || star==2*x-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            star++;
        }
        printf("\n");
        x--;
    }

    return 0;
}
