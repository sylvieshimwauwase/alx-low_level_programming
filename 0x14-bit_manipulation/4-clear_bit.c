#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: number
 * @index: indexes
 *
 * Return: bit value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}
