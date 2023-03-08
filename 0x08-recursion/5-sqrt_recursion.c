#include "main.h"

/**
* getNumSqr - return the natural square root of a number
* @num: value to check
* @i: power factor
*
* Return: int
*/

int getNumSqr(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (getNumSqr(num, i + 1));
	else
		return (-1);
}

/**
* _sqrt_recursion - return the natural root of a number to a value
* @n: value to check
*
* Return: int
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (getNumSqr(n, 1));
}
