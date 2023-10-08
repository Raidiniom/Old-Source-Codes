#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int j;
    int n;
    char text[50];
    int len;

    printf("Enter the text you want: ");
    scanf("%50s",&text);

    printf("Enter the size for the Heart Shape: ");
    scanf("%d",&n);

    len=strlen(text);

    //Upper Part
    i=n/2;
    while(i<=n)
    {
        j=1;
        while(j<n-i)
        {
            printf(" ");
            j+=2;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i+=2;
    }

    i=n;
    while(i>=1)
    {
        j=i;
        while(j<n)
        {
            printf(" ");
            j++;
        }

        if(i==n)
        {
            j=1;
            while(j<=(n*2-len)/2)
            {
                printf("*");
                j++;
            }
            printf("%s",text);
            j=1;
            while(j<(n*2-len)/2)
            {
                printf("*");
                j++;
            }
        }
        else
        {
            j=1;
            while(j<=(i*2)-1)
            {
                printf("*");
                j++;
            }
        }
        printf("\n");
        i--;
    }


    return 0;
}
