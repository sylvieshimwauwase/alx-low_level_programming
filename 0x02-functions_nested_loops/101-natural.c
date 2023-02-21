#include <stdio.h>

/**
 * main - list all multiples of 3 and 5 under 1024
 *
 * Return: always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum + = i;
	}
	printf("%d\n", sum);
	return (0);
}
