#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: given string
 * Return: nothing
 */
void puts2(chr *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

