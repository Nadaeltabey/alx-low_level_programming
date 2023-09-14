#include "dog.h"
#include"stdlib.h"

/**
 * free_dog - writes th
 * @d: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
	free(d->name);
if (d->owner)
	free(d->owner);
free(d);
}
}