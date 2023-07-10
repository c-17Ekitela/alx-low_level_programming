#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: the size of the array
  * @c: the character in the array
  *
  * Return: the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *t;

	if (size == 0)
		return (NULL);
	t = malloc(size * sizeof(char));

	if (t == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		t[x] = c;
	}

	return (t);
}
