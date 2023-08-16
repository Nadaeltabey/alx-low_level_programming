#include"main.h"

/**
 * _isalpha  - function to tell if it is a
 * letter of lowercase or uppercase
 * @c: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
{
_putchar(c + '0');
}
else if (c >= 'A' && c <= 'Z')
{
_putchar(c + '0');
}
else
{
return (0);
}
}
