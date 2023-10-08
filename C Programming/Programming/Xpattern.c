#include<stdio.h>

int main()
{
    int x;
    int y;
    int j;

    printf("Enter th size for the X: ");
    scanf("%d",&x);

    y=2*x-1;

    x=1;
    while(x<=y)
    {
        j=1;
        while(j<=y)
        {
            if(x==j||j==(y-x+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    printf("\n");
    x++;
    }

    return 0;
}
