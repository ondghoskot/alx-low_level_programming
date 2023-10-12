#include "main.h"
#include <stdio.h>

/**
 * main  - prints numbers from 1 to 100 with some twists:
 * if a number is a multiple of 3 it prints Fizz
 * if a number is a multiple of 5 it prints Buzz
 * if it's both a multiple of 3 and 5 it prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
