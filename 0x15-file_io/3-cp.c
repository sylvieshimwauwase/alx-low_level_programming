#include "main.h"

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
	char byte;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write it %s\n", argv[2]);
		exit(99);
	}
	b_read = read(file_from, &byte, 1);
	b_write = write(file_to, &byte, 1);
	while (b_read > 0)
	{
		if (b_write != 1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
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
