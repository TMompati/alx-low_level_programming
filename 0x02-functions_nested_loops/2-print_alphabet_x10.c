#include "main.h"

/**
 *print_alphabet - Prints the alphatbet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int m, n = 97;

	for (m = 0; m < 10; m++)
	{
		while (n < 123)
		{
			_putchar(n);
			n++;
		}
	}
	_putchar(10);
}
