#include "main.c"

/**
 * swap_int - swap integers
 * @a: integer 1
 * @b: integer 2
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
