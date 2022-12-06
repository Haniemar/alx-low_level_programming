#include "main.h"
/**
 * append_text_to_file - function to append text to end of file
 * @filename: name of file
 * @text_content: content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters = 0;
	int awr;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
