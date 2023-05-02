#include "main.h"

/**
 * _atoi - Function that converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			num = num * 10 + digit;
		}
		else if (num < 0)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
