#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat -  function that concatenates two strings.
  * @s1: first string to be concatenated
  * @s2: second string to be concatenated
  * @n: number of bytes
  *
  * Return: the pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL ||  s2 == NULL)
		return ("");

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
