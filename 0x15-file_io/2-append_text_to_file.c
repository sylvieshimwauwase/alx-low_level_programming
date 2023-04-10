#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: content of the file
 *
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	ssize_t b_write;
	size_t text_len;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		b_write = write(fileno(file), text_content, text_len);
		if (b_write != (ssize_t)text_len)
		{
		fclose(file);
		return (-1);
		}
	}
	fclose(file);
	return (1);
}
