#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Character to be checked
 *
 * Return: 1 if c is a character, otherwise 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
