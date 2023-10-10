#include "main.h"

/**
 * _islower - returns truthy value (1) if character is lowercase.
 */
int _islower(int c)
{
	if ('a' <= c && c <= ''z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
