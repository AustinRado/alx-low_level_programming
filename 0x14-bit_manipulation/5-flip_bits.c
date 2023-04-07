#include "main.h"

/**
 * flip_bits - this returns number of bits to be flipped
 * and get them from one number to another
 * @n: number
 * @m: number
 *
 * Return: The number of bit n needs to be equivalent to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			n_bits++;

		xor_result >>= 1;
	}
	return (n_bits);
}
