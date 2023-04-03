#include "main.h"

/**
 * _strpbrk - searches for bytes
 *
 * @s: the string
 *
 * @accept: found the bytes, or @NULL if no byte
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int indx;
		while (*s)
		{
			for (indx = 0; accept[indx]; indx++)
			{
				if (*s == accept[indx])
					return (s);
			}
			s++;
		}
	return (NULL);
}
