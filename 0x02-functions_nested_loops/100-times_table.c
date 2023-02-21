#include "main.h"

/**
 * print_times_table - print time table of the input starting from 0
 * @n: number
 * Return: always number
 */
void print_times_table(int n)
{
	int i, mul, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= 15; i++)
		{
			_putchar('0');

			for (mul = 1; mul <= i; mul++)
			{
				_putchar(',');
				_putchar(',');

				product = i * mul;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
