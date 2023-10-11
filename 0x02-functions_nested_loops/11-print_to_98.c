#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	_putchar('0' + n / 100);
	_putchar('0' + (n / 10) % 10);
	_putchar('0' + n % 10);
	_putchar('\n');
}

