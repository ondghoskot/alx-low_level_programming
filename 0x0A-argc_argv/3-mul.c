#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication of two numbers
 * @argc: num of CLA
 * @argv: array of CLA
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
