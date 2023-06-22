#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print numbers between 0 to 9
 *
 * Return: Void.
 */

void print_most_numbers(void)
{
	int numb;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
