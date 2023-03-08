#include "main.h"

/**
* PrimeNum - Checks for  prime number
* @n: value to check
* @i: iterator
*
* Return: int
*/

int PrimeNum(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + PrimeNum(n, i + 1));
}

/**
* is_prime_number - return 1 if input is a prime else return 0
* @n: value to check
*
* Return: int
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (PrimeNum(n, 2));
}
