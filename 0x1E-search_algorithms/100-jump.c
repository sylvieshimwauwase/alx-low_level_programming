#include "search_algos.h"
#include <math.h>

/**
 * jump_search - performing jump search algorithm
 * @array: array of elements to search from
 * @size: size of array
 * @value: value of array
 * Return: returns -1 on sucess
 */
int jump_search(int *array, size_t size, int value)
{
	size_t  prev, curr, i;

	prev = 0;
	curr = 0;
	i = 0;

	if (array != NULL)
	{
		while (curr < size && array[curr] < value)
		{
			prev = curr;
			curr = curr + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

		for (i = prev; i <= curr; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
				return (i);
				}
			}
		}
	}

	return (-1);
}
