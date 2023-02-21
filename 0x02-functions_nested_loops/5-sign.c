#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: character
 * Return: 1 if n greater than zer or 0 if n is zero or -1 if n is less zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
}
