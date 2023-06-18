#include <stdio.h>

/**
 * main - a program to print a sentence
 * Return:1 (Success)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stdout);
	return (1);
}
