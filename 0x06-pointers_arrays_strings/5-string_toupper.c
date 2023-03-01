#include "main.h"
#include <string.h>

/**
 * *string_toupper - converts letters to uppercase
 * @str:string
 * Return:letters
 */
char *string_toupper(char *str)
{
	int len = strlen(str);
	int a;

	for (a = 0; a < len; a++)
	{
		str[a] = toupper(str[a]);
	}
	return (str);
}
