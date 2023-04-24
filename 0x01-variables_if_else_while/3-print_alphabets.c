#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing both lower case and upper case letters.
 *
 * Return: Always (0) for success.
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);
	putchar('\n');
	return (0);
}
