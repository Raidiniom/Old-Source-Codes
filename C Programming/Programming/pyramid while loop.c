#include<stdio.h>

int main()
{
    int num, count = 1, i;

    printf("Enter no of rows of Pyramid\n");
    scanf("%d", &num);

    while(count <= num)
    {
        i = 0;
        while( i <= (num - count) )
        {
            printf(" ");
            i++;
        }

        i = 0;
        while(i < (2*count-1))
        {
            printf("* ");
            i++;
        }

        printf("\n");
        count++;
    }

    return 0;
}
