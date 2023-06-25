#include "main.h"
/**
  *print_diagonal - starting point
  *@n: Represents the number of times
  *Report: 0
  */
void print_diagonal(int n)
{
	int g;
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 0; g < n; g++)
		{
			for (h = 0; h < g; h++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
