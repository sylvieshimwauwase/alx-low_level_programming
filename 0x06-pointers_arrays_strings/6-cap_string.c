#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str:string
 * Return:capital strings
 */
char *cap_string(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;
		if (str[a - 1] == ' ' ||
				str[a - 1] == '\t' ||
				str[a - 1] == '\n' ||
				str[a - 1] == ',' ||
				str[a - 1] == ';' ||
				str[a - 1] == '.' ||
				str[a - 1] == '!' ||
				str[a - 1] == '?' ||
				str[a - 1] == '"' ||
				str[a - 1] == '(' ||
				str[a - 1] == ')' ||
				str[a - 1] == '{' ||
				str[a - 1] == '}' ||
				a == 0)
			str[a] -= 32;
		a++;
	}
	return (str);
}
