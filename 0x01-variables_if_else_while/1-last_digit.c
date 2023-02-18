#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a number is greater than 5, zero ,or not
 *
 * Return: Always 0
 */
int main(void)
{
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastdig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastdig);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	}
	return (0);
}
