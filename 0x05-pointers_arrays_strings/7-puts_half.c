#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;

	while (len != '\0')
	{
		len++;
	}

	if (len  % 2 == 0)
	{
		int i = len / 2;
	}
	else
	{
		int i = (len - 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
