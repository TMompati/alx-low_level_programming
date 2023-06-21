#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Starting point to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n < 99)
	{
		n++;
		while (n < 99)
		{
			printf(", %d", n);
			n++;
		}
	}
	else
	{
		n--;
		while (n > 97)
		{
			printf(", %d", n);
			n--;
		}
	}
	printf("\n");
}
