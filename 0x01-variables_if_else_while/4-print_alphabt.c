#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'd' || ch == 'p')
		{
			ch += 2;
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
