#include <stdlib.h>

/**
 * free_dog - function thet frees dog
 * @d: dog function
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}
