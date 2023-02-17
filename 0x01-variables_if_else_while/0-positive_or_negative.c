#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -entry point
*
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The value of n is positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf("The value of n is zero: %d\n", n);
	}
	else
	{
		printf("The value of n is negative: %d\n", n);
	}
	return (0);
}
