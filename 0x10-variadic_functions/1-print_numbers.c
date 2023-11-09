#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 * @separator: separator for the numbers (ie ", ")
 * @n: number of numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1)
			printf("%s", separator);

	}
	va_end(numbers);
	printf("\n");
}
