#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;

		while (j <= 59)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
