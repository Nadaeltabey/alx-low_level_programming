#include "main.h"

/**
 * _pow_recursion - function to give
 * a power
 * @y: operand
 * @x: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
