#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, prod;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			prod = row * column;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
