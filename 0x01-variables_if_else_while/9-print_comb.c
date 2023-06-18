#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	putchar(48);

	for (n = 49; n < 58; n++)
	{
		putchar(44);
		putchar(32);
		putchar(n);
	}

	return (0);
}
