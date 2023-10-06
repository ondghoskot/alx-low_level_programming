#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sdn = 48;

	while (sdn <= 57)
	{
		putchar(sdn);
		if (sdn < 57)
		{
		putchar(44);
		putchar(32);
		}
		sdn++;
	}
	putchar('\n');
	return (0);
}
