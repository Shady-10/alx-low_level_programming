#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - determine the last digit of n.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 == 0)
	{
		printf("The last digit of %d is 0 and is 0\n", n);
	}
	else if (n % 10 > 5)
	{
		printf("The last digit of %d is %d and is greater than 5 and not 0\n", n, (n % 10));
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
	}
	return (0);
}