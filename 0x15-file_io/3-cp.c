#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - copying from one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to\n", argv[2]);
		exit(99);
	}
	while(read_bytes = read(file_from, buffer, BUFFER_SIZE) > 0)
	{
		write_bytes  = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	close(file_from);
	close(file_to);
	return (0);
}
