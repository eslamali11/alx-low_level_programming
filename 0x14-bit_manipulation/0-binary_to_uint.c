#include "main.h"

/**
 * binary_to_uint -  convert binary to number
 *
 * @b: binary num
 *
 * Return: the num or 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conv = conv * 2 + (b[i] - '0');
	}
	return (conv);
}
