#include "main.h"
/**
  *print_triangle - starting point
  *@size: Represents size of the triangle
  *Return: 0
  */
void print_triangle(int size)
{
	int k, l, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = size - k; l > 1; l--)
			{
				_putchar(' ');
			}
			for (m = 0; m <= k; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
