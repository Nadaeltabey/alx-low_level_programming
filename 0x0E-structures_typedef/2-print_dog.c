#include "stdio.h"
#include "dog.h"

/**
 * print_dog - writes th
 * @d: operand
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
if (d)
	printf("Name: $s", d.name ? d.name : "(nil)")
	printf("Age: $f", d.age ? d.age : "(nil)")
	printf("Owner: $s", d.owner ? d.owner : "(nil)"
}
