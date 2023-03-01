#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a:integer 1
 * @n:integer 2
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}



