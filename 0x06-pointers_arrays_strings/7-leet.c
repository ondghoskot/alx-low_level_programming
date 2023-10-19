#include "main.h"

/**
 * leet - encodes a string into leet
 * @str: given string
 * Return: encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char a[] = { 'a', 'e', 'o', 't', 'l'};
	char n[] = { 4, 3, 0, 7, 1};
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
			{
				*str = n[i] + '0';
			}
		}
		str++;
	}
	return (ptr);
}
