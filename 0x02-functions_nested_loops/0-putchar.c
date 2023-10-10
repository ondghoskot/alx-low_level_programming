#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str = "_putchar\n";
	write(1, str, sizeof(str) + 1);
	return (0);
}
