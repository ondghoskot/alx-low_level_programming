#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = _strlen(str);

	if (len  % 2 == 0)
	{
		int i = len / 2;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		int j = (len - 1) / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
