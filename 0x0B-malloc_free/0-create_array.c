#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: the size of array
 * @c: the value
 *
 * Return: NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
