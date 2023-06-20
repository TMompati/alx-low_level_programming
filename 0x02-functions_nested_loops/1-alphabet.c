#include "main.h"

/**
 *print_alphabet - Prints the alphatbet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
