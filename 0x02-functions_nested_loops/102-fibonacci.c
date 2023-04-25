#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Nothing!
 */

int main(void)
{
	int a = 1, b = 2, c, i;

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 50)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
