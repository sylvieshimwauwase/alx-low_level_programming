#include "main.h"

/**
 * flip_bits - this function flip bits
 * @n: number
 * @m: number
 *
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result != 0)
	{
		count += result & 1;
		result >>= 1;

	}
	return (count);
}
