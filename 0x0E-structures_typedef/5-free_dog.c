#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
