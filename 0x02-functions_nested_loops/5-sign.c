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
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (-1);
}
