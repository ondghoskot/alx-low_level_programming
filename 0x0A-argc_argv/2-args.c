#include <stdio.h>

/**
 * main - prints all CLA followed by a new line each
 * @argc: number of CLA
 * @argv: array of strings (CLAs)
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
