#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: how mach bytes
 *
 * Return: NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc((len1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
