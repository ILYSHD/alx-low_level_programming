#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: parametre
 *Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	unsigned int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (; str[len] != '\0'; ++len)
	;
	s = malloc(len * sizeof(*str) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < len; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
