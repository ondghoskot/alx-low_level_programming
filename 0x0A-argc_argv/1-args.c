#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of CLA
 * @argv: array of strings of CLA (unused arg in this case)
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
