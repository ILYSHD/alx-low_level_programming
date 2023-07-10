#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function
 *@s: parametre
 *Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}

/**
 * str_concat - function
 * @s1: parametre
 * @s2: parametre
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc((len1 + len2) * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; ++i)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < len2; ++j)
		{
			s[len1 + j] = s2[j];
		}
		return (s);
	}
}
