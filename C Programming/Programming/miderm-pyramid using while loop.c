#include<stdio.h>

int main()
{
    int rows;
    int space;
    int x=1;
    int z;

    printf("Enter the number of rows:");
    scanf("%d",&rows);

    while(x<=rows)
    {
        space=1;
        z=0;
        while(space<=rows-x)
        {
            printf("  ");
            space++;
        }
        while(z!=2*x-1)
        {
            printf("* ");
            z++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
