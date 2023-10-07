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

	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			putchar(d1);
			putchar(d2);
			if (!(d1 == 56 && d2 == 57))
			{
				putchar(44);
				putchar(32);
			}
			d2++;
		}
		d1++;
		d2 = 50;
		while (d1 == d2 || d1 > d2)
		{
			d2++;
        	}
	putchar('\n');
	return (0);
}
