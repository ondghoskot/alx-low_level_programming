#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
{
	const char *str = "_putchar\n";

	return write(1, str, sizeof(str) + 1);
}
int main(void)
{
	_putchar(str);
	return (0);
}
