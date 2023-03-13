#include "main.h"
#include <stdlib.h>

/**
* word_counter - count the word in a string
* @s: string check
*
* Return: number a words in a string
*/

int word_counter(char *s)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == 0)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}

/**
* **strtow - splite into two words
* @str: string to split
*
* Return: pointer to words else null
*/

char **strtow(char *str)
{
	char **matrix, *p;

	int i, j = 0, len = 0, k = 0, start, end;
	int words;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == 0 || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				p = (char *) malloc(sizeof(char) * (j + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
					*p++ = str[start++];
				*p = '\0';
				matrix[j] = p - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}
	matrix[j] = NULL;
	return (matrix);
}
