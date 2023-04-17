#ifndef DOG
#define DOG

typedef struct dog dog_t;

/**
 * struct dog - define type
 *
 * @name: the name
 * @age: the age
 * @owner: the owner name
 *
 * Description: it's just a dog struct :)
 *
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
