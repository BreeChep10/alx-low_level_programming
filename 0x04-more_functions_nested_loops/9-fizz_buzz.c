#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: program that prints the numbers from 1 to 100.
 * But for multiples of three print Fizz
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 always success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%i ", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
