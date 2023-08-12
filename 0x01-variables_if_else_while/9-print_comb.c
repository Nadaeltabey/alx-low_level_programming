#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i = '0';

while (i <= '9')
{
while (i <= '9')
{
putchar(i);
putchar(',');
i++;;
}
i++;
}
putchar('9');
putchar('\n');
return (0);
}
