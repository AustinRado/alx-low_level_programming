#include "main.h"

/**
* _strchr -  Locates a character inn a string
*
* @s: string to receive and return
* @c: Character to receive
* Return: Character
*/

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
