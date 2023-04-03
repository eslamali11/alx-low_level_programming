#include "main.h"

/*
 * _strchr -  function that locates a character in a string.
 * @s: the string
 * @c: the located char
 *
 * Return: if found return pointer - if not return NULL.
 */

char *_strchr(char *s, char c)
{
	int zero;

	for (zero = 0; s[zero] >= '\0'; zero++)
	{
		if (s[zero] == c)
			return (s + zero);
	}

	return (NULL);
}
