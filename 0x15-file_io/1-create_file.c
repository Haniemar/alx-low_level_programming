#include "main.h"
/**
 * create_file -  function to create file
 * @filename: name of file
 * @text_content: text content
 * Return: 1 on succes -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int awr;
	int nletters = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (!text_content)
		text_content = "";
	while (text_content[nletters])
		nletters++;
	awr = write(fd, text_content, nletters);
	if (awr == -1)
		return (-1);
	close(fd);
	return (1);
}
