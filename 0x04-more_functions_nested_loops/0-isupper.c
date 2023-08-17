#include"main.h"

/**
 * _isupper  - function to tell if it is a
 * letter uppercase
 * @c: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
