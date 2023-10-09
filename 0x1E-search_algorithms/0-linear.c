#include ""search_algos.h"
/**
* linear_search - searching for a value in an array
* @array: array of integers
* @size: size of array
* @value: value of an array
*Return:returning -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Comparing % d with % d \n", array[i], value);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
