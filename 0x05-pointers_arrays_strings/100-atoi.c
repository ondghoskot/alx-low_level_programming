#include "main.h"

/**
 * _atoi - coverts string to an integer
 * @s: pointer to a string literal
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';
			if (result > (2147483647 - digit / 10))
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483647);
				}
			}
			result = result * 10 + digit;
		}
		else if (s[i] != '+')
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
