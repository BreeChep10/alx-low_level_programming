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
	int a, b, c, sum_even;

	while (b < 4000000)
	{
		c = a + b;
		b = a;
		a = b;
		if (c % 2 == 0)
		{
			sum_even += c;
		}
	}
	printf("%d\n", sum_even);
	return (0);
}
