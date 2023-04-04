#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: The string
 * @needle: The substring
 *
 * Return: a pointer if located - else NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int dex;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		dex = 0;

		if (haystack[dex] == needle[dex])
		{
			do {
				if (needle[dex + 1] == '\0')
					return (haystack);

				dex++;

			} while (haystack[dex] == needle[dex]);
		}

		haystack++;
	}

	return ('\0');
}
