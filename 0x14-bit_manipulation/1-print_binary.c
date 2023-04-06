#include "main.h"

/**
 * print_binary - Function that prints the binary rep of a number
 * @n: Number of print in a binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;
	char buffer[64];

	if (n == 0)
	{
		printf("0");
		return;
	}

	num = n;

	for (i = 0; n != 0; n = n >> 1, i++)
		;
	for (i -= 1; i >= 0; i--)
		buffer[i] = (num >> i) & 1 ? '1' : '0';
	printf("%s", buffer);
}
