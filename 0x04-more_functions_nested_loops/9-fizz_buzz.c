#include"main.h"
#include"stdio.h"

/**
 * print_diagonal - function to give
 * a diagonal
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
int main()
{
int i;

	for (i=1; i<=100; i++)
	{
		/*
		if (i <= 9)
		{
		*/
		if (i%3==0)
		{
			printf("Fizz");
		}
		else if (i%5==0)
		{
			printf("Buzz");
		}
		else if (i%3==0 && i%5==0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",i);
		}
		/*
		if (i > 9)
		{
                if (i%3==0)
		{
			printf("Fizz");
		}
		else if (i%5==0)
		{
			printf("Buzz");
		}
		else if (i%3==0 && i%5==0)
		{
			printf("FizzBuzz");
		}
		else
                {
			printf("%d",i);
                }
                }
		*/
		printf(" ");
	}
	printf("\n");
return(0);
}
