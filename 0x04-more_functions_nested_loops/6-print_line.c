#include "main.h"
/**
  *print_line - starting function
  *@n: reps the number of times the character is printed
  *Description: printing a line
  *Return: 0
  */
void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
