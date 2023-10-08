#include <stdio.h>

char storyone(int story);
char storytwo(int story);

int main()
{
	int story;
	int number;

	do
	{
	printf("(1) My Famed Date Experience.");
	printf("\n(2) How I Died.");
	printf("\n\nChoose a story: ");
	scanf("%d", &story);

	if(story==1)
	{
		storyone(story);
		number=0;
	}

	else if(story==2)
	{
		storytwo(story);
		number=0;
	}

	else
	{
		system("cls");
		printf("Please choose only 1 or 2\n");
		number=1;
	}
	}
	while(number==1);

	return 0;


}


char storyone(story)
{
	char name[100],restaurant[100],food[100],food2[100],name2[100],word[100],feeling[100];
	int year;

	printf("\n\nEnter a year: ");
	scanf("%d",&year);
	printf("Enter a name of a celebrity: ");
	scanf("%s",&name);
	printf("Enter a name of any restaurant: ");
	scanf("%s",&restaurant);
	printf("Enter any food: ");
	scanf("%s",&food);
	printf("Enter another food: ");
	scanf("%s", &food2);
	printf("Enter another name of a celebrity: ");
	scanf("%s", &name2);
	printf("Enter a word you say when you're angry: ");
	scanf("%s", &word);
	printf("Enter any feeling (Past-tense): ");
	scanf("%s", &feeling);

	printf("\n");

	printf("\nBack in %d, I went on a date with %s and ate at %s.",year,name,restaurant);
	printf("\nI ordered %s and my date ordered %s.",food,food2);
	printf("\nWe were having a great time when suddenly %s showed up.",name2);
	printf("\nHe/she came up to our table and yelled '%s'.",word);
	printf("\nI was %s and surprised when %s showed up.",feeling,name2);
	printf("\nI will never date a celebrity again.");

	return storyone;

}

char storytwo(story)
{
	char color[100],thing[100],organism[100],color2[100],thing2[100];
	int number,year;

	printf("\nEnter a year: ");
	scanf("%d",&year);
	printf("Enter a color: ");
	scanf("%s",&color);
	printf("Enter a thing: ");
	scanf("%s",&thing);
	printf("Enter an organism: ");
	scanf("%s",&organism);
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Enter another color: ");
	scanf("%s",&color2);
	printf("Enter another thing: ");
	scanf("%s",&thing2);

	printf("\n");

	printf("\n%d, I had an adventure. I was wearing a %s shirt.",year,color);
	printf("\nNext to me was a/an %s that I used to fight the giant %s in our backyard.",thing,organism);
	printf("\nThe %s had a very scary face. Would you like me to describe it to you?",organism);
	printf("\nIt had %d eyes, %s lips, and wore a big %s on its head. ",number,color,thing2);
	printf("\nTurns out the %s was kind and gave me sweets and candies.",organism);
	printf("\nAfter eating one candy, I didn't know it had poison. I died.");

	return storytwo;

}
