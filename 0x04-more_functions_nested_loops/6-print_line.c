#include "main.h"

/**
 * print_line - prints a straight line
 * @n: specifies the legnth of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int m = 0;

	while (m <= n)
	{ 
		if (m >= 1)
		{
			_putchar(95);
		}
		m++;
		
	}
	_putchar(10);
}
