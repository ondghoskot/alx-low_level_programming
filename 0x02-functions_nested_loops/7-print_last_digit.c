#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: given number, input
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			ld = 8;
		}
		else
		{
			ld = -n % 10;
		}
	}
	else
	{
		ld = n % 10;
	}
	_putchar('0' + ld);
	return (ld);
}
