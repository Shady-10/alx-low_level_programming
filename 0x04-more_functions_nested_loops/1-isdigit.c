#include "main.h"

/**
*_isupper - check a digit
*@c: variable
*Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
