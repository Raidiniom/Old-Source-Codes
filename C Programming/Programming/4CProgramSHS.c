#include <stdio.h>
#include <math.h>

int computeSum(int a, int b);
float computeAve(int a, int b);

int main()
{
	int a;
	int b;
	int Sum;
	float Ave;

	printf("enter Integer 1: ");
	scanf("%d", &a);
	printf("enter Integer 2: ");
	scanf("%d", &b);

	printf("\n \n");

	Sum = computeSum(a, b);
	printf("Sum = %d", Sum);

	printf("\n");

	Ave = computeAve(a, b);
	printf("Ave = %.2f", Ave);

	return 0;
}


int computeSum(int a, int b)
{
	int Sum;
	Sum = a+b;
	return Sum;
}


float computeAve(int a, int b)
{
	float Ave;
	Ave = ((float)a+(float)b)/2.0;
	return Ave;
}
