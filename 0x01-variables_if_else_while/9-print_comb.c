#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sdn = 48;

	while (sdn < 58)
	{
		putchart(sdn);
		putchart(44);
		putchart(32);
		sdn++;
	}
	putchart('\n');
	return (0);
}
