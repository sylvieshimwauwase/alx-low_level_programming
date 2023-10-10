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
	size_t jump, prev, curr, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = (size_t)sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		curr = prev + jump;

		if (curr >= size)
		{
			curr = size - 1;

		}

		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);

		if (array[curr] >= value || curr == size - 1)
		{
			break;
		}
		prev += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	for (i = prev; i <= curr && i < size; i++)
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

	return (-1);
}
