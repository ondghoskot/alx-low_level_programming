#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (is_negative) {
            _putchar('-');
            n = -n;
        }

        int digit = n / 10;
        if (digit != 0 || (n >= 0 && n < 10)) {
            _putchar(digit + '0');
        }

        _putchar(n % 10 + '0');
        _putchar(',');

        if (is_negative) {
            n = -n;
        }

        if (is_negative) {
            n--;
        } else {
            n++;
        }
    }

    if (is_negative) {
        _putchar('-');
        n = -n;
    }

    int digit = n / 10;
    if (digit != 0 || (n >= 0 && n < 10)) {
        _putchar(digit + '0');
    }
    _putchar(n % 10 + '0');
    _putchar('\n');
}
