#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');

			_putchar(58);

			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');

			_putchar(10);
		}
	}
}

