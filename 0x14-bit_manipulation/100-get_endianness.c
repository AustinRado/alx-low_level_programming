#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 0x12345678;
	char *ptr = (char *)&num;

	if (*ptr == 0x78)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
