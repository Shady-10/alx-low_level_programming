#include "main.h"
/**
 *  print_last_digit- a function that returns the last digit
 * of an integer
 * @i: integer input
 * Return: the last digit of i
 */
int print_last_digit(int i)
{
   	if(i<0)i*=-1;
	_putchar('0'+((i % 10) * 10 + i % 10));
	return '0'+(i % 10) * 10 + i % 10);
}
