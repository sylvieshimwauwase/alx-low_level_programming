#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: length
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int begin = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	int a;

	for (a = begin; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
	return (len);
}
