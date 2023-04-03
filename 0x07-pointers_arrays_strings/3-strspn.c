#include "main.h"

/**
 * _strspn - get the length.
 *
 * @s: pointer to string
 * @accept: the substring
 *
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int dex;

	while (*s)
	{
		for (dex = 0; accept[dex]; dex++)
		{
			if (*s == accept[dex])
			{
				byt++;
				break;
			}

			else if (accept[dex + 1] == '\0)
				return (byt);
		}
		s++;
	}
	return (byt);
}
