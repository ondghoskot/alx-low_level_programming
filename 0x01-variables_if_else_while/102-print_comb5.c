#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1 = 48;
	int d2 = 48;
	int d3 = 48;
	int d4 = 49;

	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			while (d3 <= 57)
			{
				while (d4 <= 57)
				{
					putchar(d1);
					putchar(d2);
					putchar(32);
					putchar(d3);
					putchar(d4);
					if (!(d1 == 57 && d2 == 56 && d3 == 57 && d4 == 57))
					{
						putchar(44);
						putchar(32);
					}
					d4++;
				}
				d3++;
				d4 = 48;
			}
			d2++;
			d3 = 48;
		}
		d1++;
		d2 = 48;
		while (d1 == d3 && d2 == d4)
		{
			d4++;
		}
	}
	putchar('\n');
	return (0);
}
