#include<stdio.h>
#include<math.h>

float computeArea(float len, float wid);
float computePeri(float len, float wid);

int main()
{
    float len;
    float wid;
    float Area;
    float Peri;

    printf("enter Length: ");
    scanf("%f", &len);
    printf("enter Width: ");
    scanf("%f", &wid);
    printf("\n \n");

    Area = computeArea(len, wid);
    printf("Area = %.2f", Area);

    printf("\n");

    Peri = computePeri(len, wid);
    printf("Perimeter = %.2f", Peri);

    return 0;
}

float computeArea(float len, float wid)
{
    float Area;
    Area = len*wid;
    return Area;
}

float computePeri(float len, float wid)
{
    float Peri;
    Peri = 2*(len+wid);
    return Peri;
}
