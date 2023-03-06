#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:string
 * @accept:character
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, i, j;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (count);
}
