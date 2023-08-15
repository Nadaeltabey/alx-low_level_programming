#include"main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 * the alphabet a - z ten times
*/

void print_alphabet_x10(void)

{
int n = 1, i;

while (n <= 10)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
n++;
}
}
