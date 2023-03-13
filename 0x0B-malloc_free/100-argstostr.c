#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *argstostr - concat all agrumnets of your program
* @ac: int value to check
* @av: array of values for the argumnt vector
*
* Return: array
*/

char *argstostr(int ac, char **av)
{
	int x, y, i, j, l = 0, a = 0;
	char *b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; (i < ac); i++)
	{
		for  (j = 0; av[i][j] != '\0'; j++)
			j++;
		i++;
	}
	l += 1;
	b = malloc(l * sizeof(char));
	if (b == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			b[a] = av[x][y];
			a++;
		}
		b[a++] = '\n';
	}
	b[a] = '\0';
	return (b);
}
