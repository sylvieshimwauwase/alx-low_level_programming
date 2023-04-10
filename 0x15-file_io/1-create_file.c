#include "main.h"
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - it creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 *
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len, b_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		b_write = write(fd, text_content, text_len);

		if (b_write != text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
