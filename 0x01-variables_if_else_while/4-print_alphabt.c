#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
        char alphabet = 'a';

        while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else putchar(alphabet);
        alphabet++;
}
putchar('\n');
return (0);
}
