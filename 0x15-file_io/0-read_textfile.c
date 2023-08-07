#include "main.h"

/**
 *read_textfile -  function to read and print the contents of a file
 *@filename: parametre
 *@letters : number of le=bytes to be printed
 *Return: 0 or the number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fr, n;
	char *buffer;

	buffer = malloc(letters * sizeof(char) + 1);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	fr = read(fd, buffer, letters);
	if (fr == -1)
	{
		return (0);
	}
	n = write(STDOUT_FILENO, buffer, fr);
	if (n == -1)
	{
		return (0);
	}
	return (n);
}
