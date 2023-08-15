#include"main.h"

/**
 * _islower  - utilizes on the _putchar function to tell if
 * the letter is lowercase
 * @c: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
