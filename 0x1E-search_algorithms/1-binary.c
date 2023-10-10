#include "search_algos.h"
/**
 * binary_search - searches a value in sorted array
 * @array: array size
 * @size: size of an array
 * @value: value of the array
 * Return: returning -1 for successful
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
	int mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[r]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return (-1);
}
