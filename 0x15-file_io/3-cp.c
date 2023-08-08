#include "main.h"
#include <stdio.h>
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main function
 *@argc: parametre
 *@argv: parametre
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int ofile_from, ofile_to, rfile_from, wfile_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ofile_from = open(argv[1], O_RDONLY);
	rfile_from = read(ofile_from, buffer, 1024);
	do {
		if (ofile_from == -1 || rfile_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		ofile_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0662);
		wfile_to = write(ofile_to, buffer, rfile_from);
		if (ofile_to == -1 || wfile_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rfile_from = read(ofile_from, buffer, 1024);
		ofile_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rfile_from > 0);
	close_file(ofile_from);
	close_file(ofile_to);
	return (0);
}
