#include"main.h"

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
