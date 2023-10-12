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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
