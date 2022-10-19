#include "main.h"

/**
 * print_sign - print the sign of numbers
 * @n: the nuber to be checked
 * Return: 1 and print + if n is greater than zero
 * 0 and print 0 if n is zero
 * @n -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar('0');
		return (1);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}
