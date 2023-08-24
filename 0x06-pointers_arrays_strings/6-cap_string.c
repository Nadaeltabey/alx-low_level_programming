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
while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
	i++;

if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
i == 0)
{
	str[i] = str[i] - 32;
		}
i++;
}
return (str);
}
