#include <stddef.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the given string
 * @accept: set of characters to look for
 * Return: pointer to set of characters to look or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
