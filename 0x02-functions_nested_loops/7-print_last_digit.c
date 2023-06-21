#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number to stdout
 *@n: Number in question
 *
 * Return: The last digit of the number entered
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
