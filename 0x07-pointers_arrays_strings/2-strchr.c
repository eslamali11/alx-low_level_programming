#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: the string
 * @c: the located char
 *
 *
 * Return: if found return pointer - if not return NULL.
 **/

char *_strchr(char *s, char c)
{
	int zero;

	for (zero = 0; s[zero] >= NULL; zero++)
	{
		if (s[zero] == c)
			return (s + zero);
	}

	return (NULL);
}
