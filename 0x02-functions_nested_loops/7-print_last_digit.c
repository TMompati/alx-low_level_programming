#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number to stdout
 *
 * Return: The last digit of the number entered
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n * 1;
		n = n % 10;
		return (n);
	}
	else
	{
		n = n * -1;
		n = n % 10;
		return (n);
	}
}
