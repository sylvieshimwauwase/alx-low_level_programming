#include "main.h"
#include <string>

/**
 * *leet - encodes a string into 1337
 * @str:string
 * Return:string
 */
char *leet(char *str)
{
	int a, b;
	char *leet_str = malloc(strlen(str) + 1);

	if (!leet_str)
	{
		fprint(stderr, "Error: Failed to allocate memory.\n");
		return (NULL);
	}
	for (a = 0, b = 0; str[a] = '\0'; a++, b++)
	{
		if (str[a] == 'a' || str[a] == 'A')
			leet_str[b] = '4';
		else if (str[a] == 'e' || str[a] == 'E')
			leet_str[b] == '3';
		else if (str[a] == 'o' || str[a] == 'O')
			leet_str[b] == '0';
		else if (str[a] == 't' || str[a] == 'T')
			leet_str[b] == '7';
		else if (str[a] == 'l' || str[a] == 'L')
			leet_str[b] == '1';
		else
			leet_str[b] = str[a];
	}
	leet_str[b] = '\0';
	return (leet_str);
}
