#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - rints the alphabet in lower case
 * Return: Always 0.
 */
int main(void)
{
	for (size_t i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	return (0);
}
