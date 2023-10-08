#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a;
    float i;
    float j;
    float q;
    float w;

    q=tan(M_PI*0.4);
    w=tan(M_PI*0.2);
    a=6;

    int z;
    int y;
    int x;
    int top;
    int c;

    printf("STAR PLATINUM\n");

    j=ceil(a*q);
    while(j>=0)
    {
        i=-ceil(0.55*a*q/w-a);
        while(i<ceil(0.55*a*q/w-a))
        {
            if((j<=0.55*a*q && j>=(i+a)*w && j>=(a-i)*w) || (j>=(i+a)*w && j<=(i+a)*q && j<=(a-i)*q) || (j<=(a-i)*q && j>=(a-i)*w && j<=(i+a)*q))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            i++;
        }
        printf("\n");
        j--;
    }
    return 0;
}
