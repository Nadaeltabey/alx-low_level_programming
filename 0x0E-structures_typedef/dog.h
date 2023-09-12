#ifndef DOG_H
#define DOG_H

/**
 * struct dog - writes th
 * @name: Th
 * @age: operand
 * @owner: Operand
 * On error, -1 is returned, and errno is set appropriately.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
