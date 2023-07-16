#include "main.h"
#include <stdlib.h>

/**
  * _calloc - function that allocates memory for an array, using malloc
  * @nmemb: number of elemets
  * @size: number of bytes in each array
  *
  * Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *t;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	t = p;

	for (index = 0; index < (size * nmemb); index++)
		t[index] = '\0';
	return (p);
}
