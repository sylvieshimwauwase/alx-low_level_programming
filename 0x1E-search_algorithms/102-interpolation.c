#include "search_algos.h"
/**
 * interpolation_search - searching algorithm using interpolation
 * @array: array to search from
 * @size: size of array
 * @value: value of the array
 * Return: returns -1 if succeeded
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	high = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
