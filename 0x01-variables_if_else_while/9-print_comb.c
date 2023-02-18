#include <stdio.h>

/**
 * main - program that prints number in ascending order
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
