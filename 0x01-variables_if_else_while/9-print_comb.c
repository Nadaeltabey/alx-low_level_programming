#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int i = '0';

while (i < '9')
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
putchar('9');
return (0);
}