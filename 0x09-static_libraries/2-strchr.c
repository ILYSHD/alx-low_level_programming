#include "main.h"

/**
 * _strchr - function
 * @s: parametre
 * @c: parametre
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	int len;
	char *f;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			return (f);
		}
	}
	return (0);
}
