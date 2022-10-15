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
	int i;

	for (i = 48; i <= 'f'; i++)
	{
		if (i == 58)
			i = 97;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
