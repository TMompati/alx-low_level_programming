#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped to the value of b
 * @b: integer to be swapped to the value of a
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a, d = *b;

	*a = d;
	*b = c;
}
