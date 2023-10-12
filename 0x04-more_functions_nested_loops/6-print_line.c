#include "main.h"

/**
 * print_line - prints '_' n times
 *
 * @n: amount of times printing '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
