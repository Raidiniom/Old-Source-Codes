#include <stdio.h>

 int main()
{
	int d , e;
	int result;
	char firstname[36];
	char lastname[36];
	char chr;

	/* scanf will help us accepts Inputs from user
		%d is for numbers
		%s is for strings
		%c is for characters
	*/
	printf("Enter your First Name: ");
	scanf("%s",firstname);
	printf("My First Name is : %s\n",firstname);

	printf("Enter your Last Name: ");
	scanf("%s",lastname);
	printf("My Last Name is : %s\n",lastname);

    printf("Enter your Middle name: ");
	scanf("%s",&chr);
	printf("My Middle Name is : %c\n",chr);


	printf("Please Enter an Integer : ");
	scanf("%d",&d);
	printf("The Value of First Integer is : %d\n ",d);

	printf("Please Enter an Integer : ");
	scanf("%d" ,&e);
	printf("The Value of Second Integer is : %d\n ", e);
	result = d / e;

	printf("The Result Values is : %d ",result);
    return 0;
}

