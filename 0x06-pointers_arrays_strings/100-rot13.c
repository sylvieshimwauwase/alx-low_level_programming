#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str:string
 * Return: string encoded
 */
char *rot13(char *str)
{
	int a, b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (str[a] == data[b])
	{
	str[a] = datarot[b];
break;
	}
	}
	}
	return (str);
}
