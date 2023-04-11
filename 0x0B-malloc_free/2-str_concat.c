#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first srting
 * @s2: the scound
 *
 * Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int len0 = 0;
	int len1 = 0;
	char con;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len0] != '\0')
		len0++;
	while (s2[len1] != '\0')
		len1++;

	con = malloc(sizeof(char) * (len0 + len1 + 1));
	if (con == NULL)
		return (NULL);


	for (i = 0; i < len0; i++)
		con[i] = s1[i];
	for (i = 0; i < len1; i++)
		con[len0 + i] = s2[i];
	con[len0 + len1] = '\0';
	return (con);
}
