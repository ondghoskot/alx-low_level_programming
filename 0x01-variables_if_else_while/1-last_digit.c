#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ldn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldn = n % 10;
	printf("Last digit of %d ", n, "is ", ldn);
	if (ldn > 5)
	{
		printf("and is greater than 5");
	}
	else if (ldn == 0)
	{
		printf("and is 0");
	}
	else if (ldn < 6 && ldn != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}