#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block
 *
 * @ptr: old memory allocated
 * @old_size: previouse size
 * @new_size: new size in bytes
 *
 * Return: NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *temp;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}

	if (new_size > old_size)
	{
		temp = malloc(new_size);
			if (temp == NULL)
				return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)temp + i) = *((char *)ptr + i);
		free(ptr);
	}

	return (temp);
}
