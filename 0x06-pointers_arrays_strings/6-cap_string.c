#include "main.h"

/**
 * *cap_string - function to give
 * a cat
 * @str: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
char *cap_string(char *str)
{
int i = 0;
while (str[i] != 0)
{
	if (i == 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	if (i == ' ')
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
i++;
}
return (str);
}
