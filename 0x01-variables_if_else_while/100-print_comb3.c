#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			if (m == 49 && n == 48)
			{
				continue;
				m++;
				n++;
			}

			putchar(m);
			putchar(n);

			if (m == 57 && n == 57)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}


