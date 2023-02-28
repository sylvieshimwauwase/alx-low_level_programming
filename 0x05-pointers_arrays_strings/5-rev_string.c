#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char *begin = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		begin++;
		end--;
	}
}
