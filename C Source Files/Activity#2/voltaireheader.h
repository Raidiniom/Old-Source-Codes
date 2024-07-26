#ifndef VOLTAIREHEADER_H_INCLUDED
#define VOLTAIREHEADER_H_INCLUDED
#define max 100

// islower
int my_islower(char c){
    if(c >= 97 && c <= 122)
    {
        return 1;
    }
    return 0;
}

// isupper
int my_isupper(char c){
    if(c >= 65 && c <= 90)
    {
        return 1;
    }
    return 0;
}

// isalnum
int my_isalnu(char c){
    if(c >= 33 && c <= 126)
    {
        return 1;
    }
    return 0;
}

// isalpha
int islet(char c){
    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
        return 1;
    }
    return 0;
}

// isdigit
int isnum(char c){
    if(c >= 48 && c <= 57)
    {
        return 1;
    }
    return 0;
}

// tolower
int conlower(char c){
    if(c >= 65 && c <= 90)
    {
        return c + 32;
    }
    return c;
}

// toupper
int conupper(char c){
    if(c >= 97 && c <= 122)
    {
        return c - 32;
    }
    return c;
}

// isspace
int idespc(char c){
    if(c == 32)
    {
        return 1;
    }
    return 0;
}

// strcpy
char my_copy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
}

// strcat
char append(char *dest, char *src)
{
    int edge = 0, pos;
    for(int in = 0; dest[in] != '\0'; in++)
    {
        edge++;
    }

    for(pos = 0; src[pos] != '\0'; pos++)
    {
        dest[edge + pos] = src[pos];
    }
    dest[edge + pos] = '\0';
}

// srtcmp
int compare(char *dest, char *src)
{
    for(int pos = 0; dest[pos] != '\0' || src[pos] != '\0'; pos++)
    {
        if(dest[pos] != src[pos])
        {
            return 0;
        }
    }
    return 1;
}

// strlen
int length(char *src)
{
    int x = 0;
    while(src[x] != '\0')
    {
        x++;
    }
    return x;
}


// display all the function being applied!!!
// For ctype.h vvvv
void display_ctype(char *input)
{
    // Strings just to hold the user input to be used in the tolower & toupper function
    char hold1[max], hold2[max];
    my_copy(hold1, input);
    my_copy(hold2, input);

    int spc = 0, digit = 0, letter = 0, alphanum = 0, clower = 0, cupper = 0, pos = 0;
    while(input[pos] != '\0')
    {
        if(idespc(input[pos]))
        {
            spc++;
        }

        if(isnum(input[pos]))
        {
            digit++;
        }

        if(islet(input[pos]))
        {
            letter++;
        }

        if(my_isalnu(input[pos]))
        {
            alphanum++;
        }

        if(my_islower(input[pos]))
        {
            clower++;
        }

        if(my_isupper(input[pos]))
        {
            cupper++;
        }
        pos++;
    }

    for(int x = 0; hold1[x] != '\0' && hold2[x] != '\0'; x++)
    {
        if(my_isupper(hold1[x]) == 1)
        {
            hold1[x] = conlower(hold1[x]);
        }

        if(my_islower(hold2[x]) == 1)
        {
            hold2[x] = conupper(hold2[x]);
        }

    }

    printf("\n");
    printf("To Lower: %s \nTo Upper: %s\n", hold1, hold2);
    printf("Count for the following: \nSpace: %d\nDigit: %d\nCharacter: %d\nAlphanumeric: %d\nLowercase: %d\nUppercase: %d", spc, digit, letter, alphanum, clower, cupper);
}

// For string.h vvvv
void display_string(char *input1, char *input2)
{
    // the string header part
    printf("\n");
    printf("String length: %d", length(input1));
    printf("\n");
    printf("String Campare: ");
    (compare(input1, input2) == 1) ? printf("Same") : printf("Not Same");
    printf("\n");
    append(input1, input2);
    printf("String Concatenate: %s", input1);
    printf("\n");
    my_copy(input1, input2);
    printf("String Copy: %s", input1);
}

#endif
