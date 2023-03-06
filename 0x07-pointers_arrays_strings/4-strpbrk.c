#include "main.h"

/**
* _strpbrk - sreaches for a string for nay set of byte
* @s: first occuranc of the string
* @accept: string to sreach
*
* Return: the a pointer to the string or  NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (NULL);
}
