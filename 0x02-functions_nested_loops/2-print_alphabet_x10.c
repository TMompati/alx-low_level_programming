#include "main.h"

/**
 *print_alphabet_x10 - Prints the alphatbet in lowercase ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int m = 0, n = 97;

	while (m < 10)
	{
		while (n < 123)
		{
			_putchar(n);
			n++;
		}

		m++;
		_putchar(10);
		n = 97;
	}
}
