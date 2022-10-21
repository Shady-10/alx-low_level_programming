#include "main.h"

/**
 * more_numbers - check a char
 *
 *Return: 0 or 2
 */
void more_numbers(void)
{
	int b;
	char a;

	for (b = 0; b < 14; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
