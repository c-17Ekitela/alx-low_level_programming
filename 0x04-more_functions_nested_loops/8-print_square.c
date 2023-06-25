#include "main.h"
/**
  *print_square - starting point
  *@size: represent the size of square
  *Return: 0
  */
void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
