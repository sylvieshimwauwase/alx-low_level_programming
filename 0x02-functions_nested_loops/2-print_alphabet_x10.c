#include "main.h"

/**
 * print_alphabet_x10- print alphabet 10 times
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char alp;
	int n;

	for (n = 0; n < 10; n++)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
	}
}
