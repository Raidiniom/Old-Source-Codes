#include <stdio.h>

int main()
{
    int a,b;

    while(b<4){

    printf("Input a number! its about acidity!\n");
    scanf("%d",&a);

        if(a>7){
            printf("WoW that's a dangerous liquid!\n");
        }
        else if(a==7){
            printf("Well that's just water at this point!\n");
        }
        else if(a<7){
            printf("That would help in making the acid into base!\n");
        }
        else {
            printf("Did you even put a number?!?!\n");
        }
    b++;
    }

    return 0;
}
