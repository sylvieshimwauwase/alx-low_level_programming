#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return: numbers
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
		_putchar('\n');
}
