#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - outputs all natural numbers
 * @n: variable assigned
 * Return: No return for this case
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
