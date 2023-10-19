#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char copy[sizeof(s)];
    char *p;

    strcpy(copy, s);
    p = leet(copy);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

