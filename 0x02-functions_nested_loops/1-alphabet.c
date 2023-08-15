#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
*/

void print_alphabet(void)

{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
