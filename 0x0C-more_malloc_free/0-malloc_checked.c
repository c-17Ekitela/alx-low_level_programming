#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: number of bytes allocated
  *
  * Return: a pointer to te allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)

		exit(98);
	return (memory);
}
