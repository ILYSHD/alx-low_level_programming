#include "main.h"
/**
 *create_file - function to create a file
 *@filename: parametre
 *@text_content: parametre
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);
	if (*text_content != NULL)
	{
		while (*text_content != '\0')
		{
			len++;
			text_content++;
		}
	}
	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);
	fw = write(fo, text_content, len);
	if (fw == -1)
		return (-1);
	close(fo);
	return (1);
}
