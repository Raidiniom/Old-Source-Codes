#include <stdio.h>

int main()
{
    int a, b;
    char c;

    do {
        for(b = 0 ; b < 5 ; b++){
            printf("\nIn a scale of 1 to 10 how good was the Movie? ");
            scanf("%d",&a);

            if (a<7){
                printf("Bad!");
            }
            else if(a==7){
                printf("Good");
            }
            else if(a==8){
                printf("Very Good");
            }
            else if(a==9){
                printf("Excellent");
            }
            else if(a==10){
                printf("Perfect!");
            }
            else{
                printf("Did you input a number?");
            }
        }
        printf("Do you wanna try again? (Y/N): ");
        scanf("%s", &c);
    }while (c == 'Y' || c == 'y');

    return 0;
}
