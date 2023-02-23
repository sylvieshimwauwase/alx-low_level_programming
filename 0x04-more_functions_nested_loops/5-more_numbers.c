#include "main.h"

/**
 * more_numbers - print numbers 10 times
 * Return: number
 */
void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 14; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			_putchar((d / 10) + '0');
		}
		_putchar((c / 10) + '0');
	}
}
