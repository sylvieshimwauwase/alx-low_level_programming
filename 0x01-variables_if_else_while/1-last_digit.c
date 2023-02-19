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
	int dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if ((dg % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", dg, dg % 10);
	}
	else if ((dg % 10) < 6 && (dg % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", dg, dg % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", dg, dg % 10);
	}
	return (0);
}
