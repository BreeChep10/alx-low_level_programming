#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the sum of the even-valued terms.
 *
 * Return: Always (0) success.
 */

int main(void)
{
	int a = 0, b = 1, c = 0;
	int sum_even = 0;

	while (c < 4000000)
	{
		c  = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum_even += c;
	}
	printf("%i\n", sum_even);
	return (0);
}
