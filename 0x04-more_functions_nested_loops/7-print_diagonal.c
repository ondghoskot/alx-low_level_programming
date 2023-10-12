#include "main.h"

/**
 * print_diagonal - prints '\\' n times
 * @n: number of times '\\' is print
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
}
