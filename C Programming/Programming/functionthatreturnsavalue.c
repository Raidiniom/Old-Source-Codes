#include<stdio.h>
#include<math.h>

int computeAdd(int a, int b);
int computeAdd1(int a, int b);
int computeAdd2(int a, int b);

int main()
{
    int a;
    int b;
    int result;
    int newA;
    int newB;

    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    result = computeAdd(a,b);
    printf("result is: %d \n",result);

    newA = computeAdd1(a,b);
    printf("New A is: %d \n",newA);

    newB = computeAdd2(a,b);
    printf("New B is: %d \n",newB);

    return 0;
}


int computeAdd(int a, int b)
{
    int result;
    result = a + b;

    return result;
}

int computeAdd1(int a, int b)
{
    int newA;
    newA = a + 7 * 5;

    return newA;
}

int computeAdd2(int a, int b)
{
    int newB;
    newB = b + 5;

    return newB;
}
