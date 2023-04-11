#include <stdlib.h>

/**
 * _strdup - return a pointer to a copy of string
 *
 * @str: the given parameter
 *
 * Return: NULL if str is NULL
 *
*/

char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
