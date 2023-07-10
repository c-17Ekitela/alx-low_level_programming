#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr -  function that concatenates all the arguments
  * @ac: the argument count
  * @av: argument vector
  *
  * Return: a character value
  */
char *argstostr(int ac, char **av)
{
	int m = 0, n = 0, o = 0, p = 0;
	char *q;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (n < ac)
	{
		while (av[n][o])
		{
			m++;
			o++;
		}
		o = 0;
		n++;
	}
	q = malloc((sizeof(char) * m) + ac + 1);
	n = 0;
	while (av[n])
	{
		while (av[n][o])
		{
			q[p] = av[n][o];
			p++;
			o++;
		}
		q[p] = '\n';
		o = 0;
		p++;
		n++;
	}
		p++;
		q[p] = '\0';
		return (q);
}
