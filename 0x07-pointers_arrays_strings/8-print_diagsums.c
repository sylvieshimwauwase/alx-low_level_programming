#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum pf two diagonals
 * @a:integer
 * @size:size of diagone
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		s2 += *(a + i * size + j);
	}
	printf("sum of first diagonal: %d\n", s1);
	printf("sum of second diagonal: %d\n", s2);
}
