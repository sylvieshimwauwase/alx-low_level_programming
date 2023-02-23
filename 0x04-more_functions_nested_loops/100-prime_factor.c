#include <stdio.h>
#include <math.h>

/**
 * main - prints large prime number
 *
 * Return: always 0
 */
int main(void)
{
	long a, large;
	long num = 612852475143;
	double square = sqrt (num);

	for (a = 1; a <= square; a++)
	{
		if (num % a == 0)
		{
			large = num / a;
		}
	}
	printf("%ld", large);
	return (0);
}
