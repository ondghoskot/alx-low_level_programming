#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
