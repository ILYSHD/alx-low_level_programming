#include "main.h"
#include <stdlib.h>
/**
 * _min - function
 * @a: parametre
 * @b: parametre
 *Return: min
 */
unsigned int _min(unsigned int a, unsigned int b)
{
	unsigned int result;

	if (a < b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return (result);
}
/**
 * _strlen - function
 *@s: parametre
 *Return: length
 */

unsigned int _strlen(char *s)
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
 * string_nconcat - function
 * @s1: parametre
 * @s2: parametre
 * @n: parametre
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j;
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
	s = malloc(len1 * sizeof(char) + _min(len2, n) * sizeof(*s2) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < _min(len2, n); j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
}
