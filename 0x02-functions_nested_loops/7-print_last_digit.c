#include  "main.h"

/**
 *  print_last_digit - print the last digir of a number
 *  @n: number
 *  Return: last digit
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar(c + '0');
	return (c);
}

