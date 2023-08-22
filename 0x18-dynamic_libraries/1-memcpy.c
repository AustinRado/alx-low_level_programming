#include "main.h"

/**
* _memcpy - copies memory byte
*
* @dest:  Destination position
* @src: Soruce position
* @n: size of byte
* Return: character
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
