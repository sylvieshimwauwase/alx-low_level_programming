#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append
 * @text_content: contents to append to end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	FILE *file = fopen(filename, "a");

	if (filename == NULL)
                return (-1);

	if (file == NULL)
		return(-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (fwrite(text_content, 1, len, file) != len)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}
