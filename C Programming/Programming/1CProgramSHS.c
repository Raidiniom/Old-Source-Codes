#include <stdio.h>

int writestory1(int name, int place, int day, int noun);
int writestory2(int color, int thing, int name, int number1, int number2);


int main()
{
	int story;

	printf("Choose a story: ");
	printf("\n(1) *Insert title here");
	printf("\n(2) *Insert title here");
	scanf("%d",story);

	if(story==1)
	{
		story = story1(rename,place,day,noun);
		printf("Here is your story: ");
		printf("%d", story)
	}
	else if (story==2)
	{

	}
	else
	{
		printf("Please choose only 1 or 2");
	}

	return 0;
}

int writestory1
{
	char a,b,c;
	int x,y,z;

	system("clear");

	printf("Enter a name: ");
	scanf("%d",&a);
	printf("Enter a place: ");
	scanf("%d",&b);
	printf("Enter a day: ");
	scanf("%d",&c);
	printf("Enter a pronoun: ");
	scanf("%d",&x);

	system("clear");

	printf("%d went to %d last %d. A bird was spying on %d, why?",a,b,c,x);

	return writestory1;
}


int writestory2
{
	char a,b,c;
	int x,y,z;

	system("clear");

	printf("Enter a name: ");
	scanf("%d",&a);
	printf("Enter a place: ");
	scanf("%d",&b);
	printf("Enter a day: ");
	scanf("%d",&c);
	printf("Enter a pronoun: ");
	scanf("%d",&x);

	system("clear");

	printf("%d went to %d last %d. A bird was spying on %d, why?",a,b,c,x);

	return writestory1;
}
