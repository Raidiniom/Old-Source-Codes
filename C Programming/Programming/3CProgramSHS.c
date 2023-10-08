#include <stdio.h>
#include <math.h>

int computeHrs(int s);
int computeMin(int s, int Hrs);
int computeSec(int s, int Hrs, int Min);

int main()
{
	int s;
	int Hrs;
	int Min;
	int Sec;

	printf("Input seconds: ");
	scanf("%d", &s);

	printf("\n");

	Hrs = computeHrs(s);
	printf("Hour: %d", Hrs);

	printf("\n");

	Min = computeMin(s, Hrs);
	printf("Minute: %d", Min);

	printf("\n");

	Sec = computeSec(s, Hrs, Min);
	printf("Second: %d", Sec);
	return 0;
}


int computeHrs(int s)
{
	int Hrs;
	Hrs = (s/3600);
	return Hrs;
}

int computeMin(int s, int Hrs)
{
	int Min;
	Min = (s -(3600*Hrs))/60;
}

int computeSec(int s, int Hrs, int Min)
{
	int Sec;
	Sec = (s -(3600*Hrs)-(Min*60));
	return Sec;
}
