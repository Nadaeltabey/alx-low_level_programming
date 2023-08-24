#include "main.h"

/**
 * *string_toupper - function to give
 * a capital
 * @cha : operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
char *string_toupper(char *cha)
{
int i = 0;
while (cha[i] != '\0')
{
	if (cha[i] >= 97 && cha[i] <= 122)
	{
		cha[i] = cha[i] - 32;
	}
i++;
}
return (cha);
}
