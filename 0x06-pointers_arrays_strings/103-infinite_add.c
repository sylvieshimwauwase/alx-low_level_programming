#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *infinite_add - adds two numbers
 * @n1:number 1
 * @n2:number 2
 * @r:character
 * @size_r:size of char
 * Return:always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, a = 0, b = 0, dig = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || flow == 1)
	{
		if (a < 0)
			val1 = 0;
		else
			val1 = *(n1 + a) - '0';
		if (b < 0)
			val2 = 0;
		else
			val2 = *(n2 + b) - '0';
		temp_tot = val1 + val2 + flow;
		if (temp_tot >= 10)
			flow = 1;
		else
			flow = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (temp_tot % 10) + '0';
		dig++;
		b--;
		a--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	return (0);
}
