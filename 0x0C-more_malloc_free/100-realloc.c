#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocate memory to a block
* @ptr: pointer to the memory block previously allocated
* @old_size: size in byte of the allocated
* @new_size: new size in byte of the new memory
*
* Return: pointer to the memory
* return pointer without chnage if new_size == old_size
* or NULL if malloc fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
