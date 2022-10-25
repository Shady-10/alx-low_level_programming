#include "main.h"

/**
 *swap_int - swaps two int values
 *@a: pointer
 *@b: pointer
 *
 */
void swap_int(int *a, int *b)
{
	int *temp = a;
	int k = *temp;

	*a = *b;
	*b = k;
}
