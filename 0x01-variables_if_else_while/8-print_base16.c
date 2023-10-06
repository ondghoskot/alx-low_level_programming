#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	char hx = 'a';

	while (x < 10)
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
