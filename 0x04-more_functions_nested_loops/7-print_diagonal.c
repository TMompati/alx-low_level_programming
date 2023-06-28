#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int rows = 0;
	int space_col = 0;

	if (n > 0)
	{

		while (rows < n)
		{
			for (space_col = 1; space_col <= rows; space_col++)
			{
				_putchar(' ');
			}
			rows++;
			_putchar('\\');
			_putchar('\n');
		}

	}
	_putchar('\n');
}

