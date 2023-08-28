#include "main.h"

/**
 * *_strstr - function to give
 * a mem
 * @haystack: operand
 * @needle: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strstr(char *haystack, char *needle)
{
char *p = haystack;
char *j = needle;

for (; *haystack != '\0'; haystack++)
{
	while (*p == *j && *j != '\0')
	{
	p++;
	j++;
	}
			if (*j == '\0')
			return (haystack);
}
return (0);
}
