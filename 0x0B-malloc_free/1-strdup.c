#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that duplicates a string
  * @str: the string to be duplicated
  *
  * Return: the duplicated string
  */
char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[y])
	{
		y++;
	}

	p = malloc((sizeof(char) * y) + 1);

	if (p == NULL)
		return (NULL);

	while (x < y)
	{
		p[x] = str[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}
