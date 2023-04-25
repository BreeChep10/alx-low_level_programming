#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int x;
	unsigned long int a = 0, b = 1, c;

	for (x = 0 ; x < 98; x++)
	{
		c = a + b;
		printf("%lu", c);

		if (x != 97)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
