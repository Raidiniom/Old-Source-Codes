#include <stdio.h>

int main()
{
    int meters;
    float fare;

    printf("Enter Meters: ");
    scanf("%d", &meters);

    meters = (meters - 250) / 200;
    fare += (2.50 * meters) + 40.00;

    printf("%d", meters);
    printf("%.2f", fare);


    return 0;
}
