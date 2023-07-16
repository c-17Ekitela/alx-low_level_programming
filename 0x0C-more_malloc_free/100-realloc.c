#include "main.h"
#include <stdlib.h>

/**
  * _realloc - function that reallocates a memory block
  * @ptr: pointer to the previous malloc
  * @old_size: size in bytes for the previous memory
  * @new_size: size 0f the newly allocated memory
  *
  * Return: a pointeer to the newly allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_new, *p;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = ptr;
	mem = malloc(sizeof(*ptr_new) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	p  = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		p[index] = *ptr_new++;

	free(ptr);
	return (mem);
}
