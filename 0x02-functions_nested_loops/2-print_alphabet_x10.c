#include"main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 * the alphabet a - z ten times
*/

void print_alphabet_x10(void)

{
int i = 'a';
int n = '1';
if (n <= 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}
