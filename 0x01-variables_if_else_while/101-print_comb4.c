#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1 = 48;
	int d2 = 49;
	int d3 = 50;

	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			while (d3 <= 57)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (!(d1 == 55 && d2 == 56 && d3 == 57))
				{
					putchar(44);
					putchar(32);
				}
				d3++;
			}
			d2++;
			d3 = 51;
			while ((d1 == d2 && d2  == d3) || (d1 > d2 && d2  > d3))
			{
				d3++;
			}
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
