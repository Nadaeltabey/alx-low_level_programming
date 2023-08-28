#include "main.h"

/**
 * *_strstr - function to give
 * a mem
 * @*haystack: operand
 * @*needle: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;

for (i = 0; haystack[i] != '\0'; i++)
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
			if (needle[j] == '\0')
			return (haystack);
return ('\0');
}
}
