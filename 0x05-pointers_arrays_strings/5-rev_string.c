#include "main.h"
#include <stdio.h>

/**
 *
 *rev_string - reverse a string
 *@s: input string.
 *Return: no return :(
 */
void rev_string(char *s)
{
    char [5] = "Today";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
