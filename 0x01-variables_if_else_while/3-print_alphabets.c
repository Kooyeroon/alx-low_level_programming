#include <stdio.h>

/**
 * main - Prints the lower and upper case letter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar ('\n');
	return (0);
}
