#include "main.h"

/**
 * read_textfile - it reads text file and prints it to POSIX
 * @filename: name of the file to read
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t b_read, b_write;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	b_read = read(fileno(file), buffer, letters);
	if (b_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	b_write = write(STDOUT_FILENO, buffer, b_read);
	if (b_write != b_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (b_read);
}
