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
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] <= '0' || argv[i][j] >= '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
