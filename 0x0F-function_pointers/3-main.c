#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - realizes simple maths operations
 * @argc: number of arguments in argv
 * @argv: CL arguments (2 ints and an op)
 * Return: 0 if Success, 98 or 100 if Error
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*ptop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	ptop = get_op_func(argv[2]);
	if (ptop == NULL)
	{
		printf("Error\n");
		return (98);
	}
	printf("%d\n", ptop(num1, num2));
	return (0);
}
