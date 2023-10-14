#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long long  n = 612852475143;
	long long lpf = -1;
	long long  d = 2;

	while (n > 1)
	{
		int is_prime = 1;
		long long i = 2;

		if (d == 2)
		{
			is_prime = 1;
		}
		else
		{
			while (i * i <= d)
			{
				if (d % i == 0)
				{
					is_prime = 0;
					break;
				}
				i++;
			}
		}
		if  (is_prime == 1  && (n % d == 0))
		{
			lpf = d;
			n /= d;
		}
		d++;
	}
	printf("%lld\n", lpf);
	return (0);
}
