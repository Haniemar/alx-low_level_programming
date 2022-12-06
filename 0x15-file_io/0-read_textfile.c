#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of  file
 * @letters: number of letters in the file
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ard, awr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	ard = read(fd, buf, letters);
	awr = write(STDOUT_FILENO, buf, ard);

	close(fd);
	free(buf);

	return (awr);
}
