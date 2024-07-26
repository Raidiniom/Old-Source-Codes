#include <stdio.h>
#define size 100
#include "voltaireheader.h"

int main()
{
    char user[size], permastring[] = "Slava Ukraini";

    printf("Anothter String: %s\n", permastring);
    printf("Enter String: ");
    gets(user);

    display_ctype(user);
    display_string(user, permastring);

    return 0;
}
