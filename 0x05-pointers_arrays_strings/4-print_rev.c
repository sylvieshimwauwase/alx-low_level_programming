#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int a;

	for (a = len - 1; a >= 0; a--)
	{
		_putchar("%c", s[a]);
	}
	_putchar('\n');
}
