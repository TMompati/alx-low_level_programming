#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n, m;

	for (n = 97; n < 123; n++)
		putchar(n);

	for (m = 65; m < 91; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
