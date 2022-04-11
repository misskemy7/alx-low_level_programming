#include <stdli.h>
#include "dog.h"

/**
 *  init_dog - intializing a variable of type struct dog
 *  @d: is pointer the struct dog
 *  @name: is the name to initialize
 *  @age: is the age to initialize
 *  @owner: is the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
