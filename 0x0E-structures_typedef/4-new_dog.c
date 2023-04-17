#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - make new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, dog1, dog2;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (dog1 = 0; name[dog1]; dog1++);
	dog1++;

	dog->name = malloc(dog1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < dog1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	
	for (dog2 = 0; owner[dog2]; dog2++);
	dog2++;
	
	dog->owner = malloc(dog2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < dog2; i++)
		dog->owner[i] = owner[i];
	
	return (dog);
}
