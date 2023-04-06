#include "main.h"

/**
 * get_bit - function that  returns value of bit at any index
 * @n: number
 * @index: index of the bit
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	if (index == 0)
	{
		a = n & 1;
		return (a);
	}
	a = get_bit(n >> 1, index - 1);
	return (a);
}
