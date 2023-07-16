#include "main.h"
#include <stdlib.h>
/**
 * array_range - main function that creates an array
 * @min: the minimum numbers
 * @max: the maximum numbers
 * Return: an integral value
 */
int *array_range(int min, int max)
{
	int i;
	int *t;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
