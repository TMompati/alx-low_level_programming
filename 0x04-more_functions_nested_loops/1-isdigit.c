#include "main.h"

/**
 * _isdigit - Checks for digits 0 through 9
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i + '0')
			return (1);
	}
	return (0);
}
