#include "main.h"
/**
 * _isalpha - a function that checks for an alpha character
 * @c: single letter input
 * Return: 1 if int c is alpha, 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
