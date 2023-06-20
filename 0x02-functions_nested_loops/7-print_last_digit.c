#include "main.h"

/**
 * print_last_digit - outputs last digit
 * @n: number to check
 * Return: Always 0 or 1
 */
int print_last_digit(int n)
{
	int test;

	if (n < 0)
		test = -1 * (n % 10);
	else
		test = n % 10;

	_putchar(test + '0');
	return (test);
}
