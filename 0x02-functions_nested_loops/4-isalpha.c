#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: Character to be checked
 *
 * Return: 1 if c is lowercase or else 0
 */
int _isalpha(int c)
{
	int n, m;

	for (n = 97; n < 123; n++)
	{
		if (c == n)
			return (1);
	}

	for (m = 65; m < 90; m++)
	{
		if (c == m)
			return (1);
	}

	return (0);
}
