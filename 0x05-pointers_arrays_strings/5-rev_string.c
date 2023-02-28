#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int c, a;

	for (c = 0; s[c] != '\0'; c++)
		for (a = 0; a < c; a++)
		{
			c--;
			reverse = s[a];
			s[a] = s[c];
			s[c] = reverse
		}
}
