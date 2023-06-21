#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: Character to be checked
 *
 * Return: 1 if c is lowercase or else 0
 */
int _islower(int c)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (_putchar(c) == _putchar(n))
			return (1);
		else
			return (0);
	}
}
