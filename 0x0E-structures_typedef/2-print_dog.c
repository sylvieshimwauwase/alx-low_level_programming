#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints structre of dog
 * @d:char of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
