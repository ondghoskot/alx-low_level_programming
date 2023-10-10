#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
