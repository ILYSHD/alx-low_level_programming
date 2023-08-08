#include "main.h"
/**
 * append_text_to_file - a function to append text to the end of a file
 * @filename: parametre
 * @text_content: parametre
 * Return: 1 for success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		if (fd == -1)
			return (-1);
		else
			return (1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
