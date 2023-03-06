#include "main.h"

/**
* _strspn - gets the length of prefix substring
*
* @s: inital segments
* @accept: value to check
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, numsize, flag;

	numsize = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				numsize++;
				flag = 1;
			}
		}

		if (flag == 0)
			return (numsize);
	}
	return (numsize);
}
