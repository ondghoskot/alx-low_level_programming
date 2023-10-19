#include "main.h"

/**
 * string_toupper - changes lowercase letters in string to uppercase
 * @str: lowercase string
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i = 0;

	if (str == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -  ('a' - 'A');
		}
		i++;
	}
	return (str);
}
