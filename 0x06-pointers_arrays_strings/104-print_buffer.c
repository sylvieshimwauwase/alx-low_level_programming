#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints  a buffer
 * @b:character
 * @size:size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x", i);
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x", (unsigned char)b[j]);
		}
		for (; j < i + 10; j++)
		{
			printf(" ");
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
			{
				printf(".");
			}
		}
		printf("\n");
	}
}

