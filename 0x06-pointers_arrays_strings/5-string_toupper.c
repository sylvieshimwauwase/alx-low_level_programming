#include "main.h"

/**
 * *string_toupper - converts letters to uppercase
 * @str:string
 * Return:letters
 */
char *string_toupper(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
