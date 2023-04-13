#include <stdlib.h>

/**
 * malloc_checked -  that allocates memory using malloc.
 *
 * @b: allocates memory
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *aloc;

	aloc = malloc(b);

	if (aloc == NULL)
		exit(98);
	return (aloc);
}
