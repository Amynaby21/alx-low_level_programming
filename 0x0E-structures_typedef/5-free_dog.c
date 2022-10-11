#include "dog.h"

/**
 *free_dog - Frees dog
 *
 *@d: The dog to freed
 *
 *Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
