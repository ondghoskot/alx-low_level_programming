#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: string of characters
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		++len;
		++i;
	}
	return (len);
}
