#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@n: integer in question
 *
 * Return: The absolute value of int
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}

