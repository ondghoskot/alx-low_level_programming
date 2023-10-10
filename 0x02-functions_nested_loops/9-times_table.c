#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int column = 0;

		while (column <= 9)
		{
			int result = row * column;

			if (column == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			_putchar('0' + result);
			column++;
		}
		_putchar('\n');
		row++;
	}
}
