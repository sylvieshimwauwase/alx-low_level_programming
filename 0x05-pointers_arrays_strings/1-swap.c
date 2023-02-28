#include "main.c"

/**
 * swap_int - swap integers
 * @a: integer 
 * @b: integer 
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
