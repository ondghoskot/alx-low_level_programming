#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive integers
 * @argc: num of CLA
 * @argv: array of CLA
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, s = 0;

	if (argc == 1)
	{
		putchar('0');
		return (0);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] <= 'a' || argv[i][j] >= 'z')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			i++;
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
		return (0);
	}
}
