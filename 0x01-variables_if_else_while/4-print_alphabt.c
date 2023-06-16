#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}

		d++;
	}

	putchar('\n');
	return (0);
}
