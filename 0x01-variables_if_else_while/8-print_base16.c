#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	char hx = 'a';

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	while (hx < 'g')
	{
		putchar(hx);
		hx++;
	}
	putchar('\n');
	return (0);
}
