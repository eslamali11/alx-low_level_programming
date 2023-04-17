#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - make free 
 *
 * @d: pass dogs
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
