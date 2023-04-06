#include "main.h"

/**
* factorial - calculates the facto
* @n: number
* Return:facto
*/

int factorial(int n)
{
	if (n == 1)
	return (1);
	else if (n < 0)
	return (-1);
	return (n * factorial(n - 1));
}
