#include <stdlib.h>

/**
 * _strdup - allocates memory for a string
 * @str: the given string
 * Return: pointer to the string
 */
char *_strdup(char *str)
{
	char *a;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		a = malloc(i + 1);
		i++;
	}
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

