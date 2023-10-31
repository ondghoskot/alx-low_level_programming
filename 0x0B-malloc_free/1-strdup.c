#include <stdlib.h>

/**
 * _strdup - allocates memory for a string
 * @str: the given string
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	char *a;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;

	a = malloc(i + 1);
	if (a != NULL)
	{
		while (i >= 0)
		{
			a[i] = str[i];
			i--;
		}
	}
	return (a);
}

