#include "stdlib.h"
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - function to give
 * alength
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}

/**
 * *_strcpy - function to copy
 * a string
 * @src: operand
 * @dest: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strcpy(char *dest, char *src)
{
int c = 0;
int i;

while (*(src + c) != '\0')
{
c++;
}

for (i = 0; i < c; i++)
{
dest[i] = src[i];
}
dest[c] = '\0';
return (dest);
}

/**
 * new_dog - new
 * @name: Th
 * @age: operand
 * @owner: On success 1.
 * * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
if (!name || !owner || age < 0)
{
return (NULL);
}
new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*new_dog).name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*new_dog).owner == NULL)
{
free(new_dog->owner);
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
new_dog->age = age;
new_dog->owner = _strcpy(new_dog->owner, owner);

return (new_dog);
}
