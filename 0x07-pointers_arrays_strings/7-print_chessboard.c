#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: The chessboard to be printed.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
