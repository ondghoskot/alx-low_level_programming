#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i = '0';

	while (i <= '2')
	{
		int j = '0';

		while (j <= '9')
		{
			int k = '0';

			while (k <= '5')
			{
				int l = '0';

				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			if (i != 2)
			{
				j++;
			}
			else
			{
				j++;
				if (j == 3)
				{
					break;
				}
			}
		}
		i++;
	}
}
