#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: the array
 * @size: size of array
 * @cmp: pointer to function comparing values
 *
 * Return: -1 if no element of size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	if (array == 0 || cmp == 0)
		return (-1);

	for (itr = 0; itr <= size; itr++)
	{
		if (cmp(array[itr]) != 0)
			return (itr);
	}

	return (-1);
}
