#include "main.h"

/**
 * _islower - returns truthy value (1) if character is lowercase.
 *
 * @c: argument of function and ASCII value.
 *
 * Return: 1 if c is lowercase and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
