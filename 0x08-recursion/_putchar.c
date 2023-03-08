#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c:character
 * Return: always success on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
