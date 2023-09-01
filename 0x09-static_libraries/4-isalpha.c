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

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
