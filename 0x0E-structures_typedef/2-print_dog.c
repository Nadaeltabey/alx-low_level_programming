#include <stdio.h>
#include "dog.h"

/**
 * print_dog - writes th
 * @d: operand
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
if (d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
