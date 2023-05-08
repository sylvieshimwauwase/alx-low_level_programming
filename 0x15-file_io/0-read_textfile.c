#include "main.h"

/**
 * read_textfile - reads a text file and prints it into POSIX output
 * @filename: name of file to read
 * @letters: number of letters to read
 * Return: numbers it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file);
		return (0);
	}

	read_bytes = read(file, buff, letters);
	if (read_bytes == -1)
	{
		free(buff);
		close(file);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buff);
		close(file);
		return (0);
	}
	free(buff);
	close(file);
	return (write_bytes);
}
