#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s:string
 * Return:length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * comp - compares string
 * @s:string
 * @i:iteration
 * @j:iteration
 * Return:string
 */
int comp(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + comp(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns a palindrome
 * @s:string
 * Return:palindrome string
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
