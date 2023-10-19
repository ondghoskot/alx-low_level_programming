#include "main.h"

/**
 * leet - encodes a string into leet
 * @str: given string
 * Return: encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	int i = 0;
	char leet_char;

	while (str[i] != '\0')
	{
		leet_char = str[i];
		if (str[i] == 'a' || str[i] == 'A')
		{
			leet_char = 4;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			leet_char = 3;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			leet_char  = 0;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			leet_char = 7;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			leet_char = 1;
		}
		str[i] = leet_char;
		i++;
	}
	return (ptr);
}
