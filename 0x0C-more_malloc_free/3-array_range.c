#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array of integer
* @min: minimum value to check
* @max: maximum value to check
*
* Return: pointer to newly created array
* NULL if min is greater than max or if malloc fails
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
