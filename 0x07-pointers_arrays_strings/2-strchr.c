#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character to string
 * @s: string
 * @c:character
 * Return:character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
