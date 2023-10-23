#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: given string
 * @c: character to be located
 * Return: pointer to the first occurrence of c or NULL if it doesn't exist
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
