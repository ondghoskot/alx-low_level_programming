#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: number of integers to sum
 * Return: sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int result = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
		result += va_arg(nums, int);
	va_end(nums);
	return (result);
}
