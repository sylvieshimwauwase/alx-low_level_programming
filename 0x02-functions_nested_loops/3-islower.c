#include "main.h"

/**
 * _islower - lowercase letter
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 1 && c <= 26)
	{
		return (1);
	}
	return (0);
}
