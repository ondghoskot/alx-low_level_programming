#include "main.h"
#include <unistd.h>

/**
 * print_sign - prints sign of input argument
 *
 * @n: input argument, an integer
 *
 * Return: 1 if n > 0, 0 if n == 0, and -1 if n  < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
