#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	int num = 1;
	char *pt = (char *)&num;

	if (*pt == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
