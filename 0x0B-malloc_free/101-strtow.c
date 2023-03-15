#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - function that splits string into words
 * @str:string to be splitted
 * @Return:splitted word
 */
char **strtow(char *str)
{
	int num_words = 0, word_index = 0, word_length = 0, word_start;
	long unsigned int i;
	int j;
	char **words, *word;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for ( i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			word_start = i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
				word_length++;
			}
			word = (char *)malloc((word_length + 1) * sizeof(char));
			if (word == NULL)
			{
				for (j = 0; j < word_index; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(word, str + word_start, word_length);
			word[word_length] = '\0';
			words[word_index] = word;
			word_index++;
		}
	}
	words[word_index] = NULL;
	return (words);
}
