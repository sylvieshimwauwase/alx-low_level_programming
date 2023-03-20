#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog's new style
 * @name: name of the dog
 * @age: age of the dog
 * @owner:owner of the dog
 * @d:new identified struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
