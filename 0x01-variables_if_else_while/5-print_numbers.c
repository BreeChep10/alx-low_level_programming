#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: Printing all single digits of base 10 from 0.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
