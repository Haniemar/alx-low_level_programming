#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int file_to, file_from;
	ssize_t ard = 1024, awr, close_file;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (ard == 1024)
	{
		ard = read(file_from, buf, 1024);
		awr = write(file_to, buf, ard);
		if (ard == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (awr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file = close(file_from);

	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_file = close(file_to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	
	return (0);
}
