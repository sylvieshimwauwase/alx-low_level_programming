#include "main.h"
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - copies contenet from one file to another
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: always 1 on success
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, b_read, b_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((b_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
	b_write = write(file_to, buffer, b_read);
		if (b_write != b_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}
	return (0);
}
