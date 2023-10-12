#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
