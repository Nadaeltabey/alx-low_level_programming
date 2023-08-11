#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;

printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(i));
return (0);
}
