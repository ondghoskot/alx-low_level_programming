#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates strings in output
 * @n: number of strings passed
 * return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
