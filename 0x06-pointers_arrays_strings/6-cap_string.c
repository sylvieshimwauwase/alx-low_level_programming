#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str:string
 * Return:capital strings
 */
char *cap_string(char *)
{
	int len = strlen(str);
	int a;

	str[0] = toupper(str[0]);

	for (a = 1; a < len; a++)
	{
		if ((str[a - 1] == ' ' || str[a - 1] == '\t' || str[a - 1] == '\n' || str[a - 1] == ',' || str[a - 1] == ';' || str[a - 1] == '.' || str[a - 1] == '!' || str[a - 1] == '?' || str[a - 1] == '"' || str[a - 1] == '(' || str[a - 1] == ')' || str[a - 1] == '{' || str[a - 1] == '}') && isalpha(str[a]))
		{
			str[a] = toupper(str[a]);
		}
	}
	return (str);
}
