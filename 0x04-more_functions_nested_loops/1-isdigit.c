#include"main.h"

/**
 * isdigit  - function to tell if it is a
 * digit
 * @c: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
