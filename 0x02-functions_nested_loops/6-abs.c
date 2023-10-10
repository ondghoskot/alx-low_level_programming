#include "main.h"

/**
 * _abs - prints the absolute value of argument
 *
 *@a: argument, signed integer
 *
 * Return: absolute value (positive)
 */
int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
	}
	return (a);
}
