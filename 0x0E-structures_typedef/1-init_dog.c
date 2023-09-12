#include "dog.h"

/**
 * init_dog - writes th
 * @d: _ writes
 * @name: Th
 * @age: operand
 * @owner: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
