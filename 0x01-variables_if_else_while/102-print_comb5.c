#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing all possible combinations of two two-digit numbers.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 != num2)
			{
				if (!(num1 == 0 && num2 == 1))
					putchar(',');
				putchar(' ');
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
