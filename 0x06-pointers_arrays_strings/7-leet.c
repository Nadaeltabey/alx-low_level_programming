#include "main.h"

/**
 * *leet - function to give
 * a cat
 * @str: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
char *leet(char *str)
{
char *p = str;
int i;
char array[] = {'a', 'e', 'o', 't', 'l'};
int s[] = {4, 3, 0, 7, 1};
while (*str)
{
for (i = 0; i <= 5; i++)
	if (*str == array[i] || *str == array[i] - 32)
	{
		*str = s[i] + 48;
	}
str++;
}
return (p);
}
