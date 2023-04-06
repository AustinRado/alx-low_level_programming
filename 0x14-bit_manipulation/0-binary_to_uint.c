#include "main.h"

/**
 * binary_to_unit - convert binary number to unsigned int
 * @b : pointer to string of 0 and 1 chars
 *
 * Return : the converted num or 0 if b contains non-binary chars or is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b == '0' || *b == '1')
			number = (number << 1) + (*b - '0');
		else
			return (0);
	}
return (number); }
