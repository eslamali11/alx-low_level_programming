#include <stdlib.h>

/**
 * array_range - creates an array of int
 *
 * @min: min number of array
 * @max: max number of array
 *
 * Return: array, NULL if fails
*/

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
