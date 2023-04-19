#include <stddef.h>

/**
 * array_iterator -  function executes a function given as a parameter
 *
 * @array: th passing array
 * @size: size of array
 * @action: the function we need to executes
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
