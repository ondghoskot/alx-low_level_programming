#include "main.h"

/**
 * print_times_table - prints the times tables of n
 *
 * @n: number of times table
 */
void print_times_table(int n)
{
	int row = 0;

	if (n <= 15 && n >= 0)
	{
		while (row <= n)
		{
			int column = 0;

			while (column <= n)
			{
				int result = row * column;

				_putchar('0' + result);
				_putchar(',');
				_putchar(' ');
				if (result < 10 && column != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result < 100 && column != 0)
				{
					_putchar(' ');
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + result % 10);
				}
				else if (result >= 100 && column != 0)
				{
					_putchar('0' + result / 100);
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + result % 10);
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
