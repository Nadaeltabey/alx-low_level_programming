#include"main.h"

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
src[i] = dest[i];
}
dest[c] = '\0';
return (dest);
}
