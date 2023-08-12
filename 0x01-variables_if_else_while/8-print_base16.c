#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char alphabet = 'A';
int i = '0';

while (i <= '9')
{
putchar(i);
i++;
}
while (alphabet <= 'F')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
