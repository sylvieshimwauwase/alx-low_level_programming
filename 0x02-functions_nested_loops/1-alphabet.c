#include "main.h"

/**
 * print_alphabet - program to print alphabet
 *
 * return: void
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
