#include"main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 * the alphabet a - z ten times
*/

void print_alphabet_x10(void)

{
int i = 'a';

while (i <= 'z')
{
if (i <= 'j')
{
_putchar(i);
i++;
}
}
_putchar('\n');
}
