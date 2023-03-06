#include "main.h"

/**
* _strstr - locate a substring
* @haystack: string to search
* @needle: substring to locate
*
* Return: returner pointer to the string or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
