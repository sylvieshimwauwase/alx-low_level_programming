#include "main.h"

/**
 * _super - checks upper letter
 * @c: number
 * Retirn: 1 if letter is upper or 0 else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
