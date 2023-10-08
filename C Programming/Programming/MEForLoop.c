#include<stdio.h>
#include<stdbool.h>

int main()
{
    int countdown;
    int confirmation;
    bool missile = true;

    printf("Launch Air-to-Air Missiles? [1]Yes [2]No\n");
    scanf("%d",&confirmation);

    if(confirmation==1)
    {
        for(countdown=3; countdown>0; countdown--)
        {
            printf("%d\n",countdown);
        }
        printf("Missiles haas been Launched!\n");
    }
    else if(confirmation==2)
    {
        printf("Launch iniation halted\n");
    }
    else
    {
        printf("Pick another weapon systetm!\n");
    }
    return 0;
}
