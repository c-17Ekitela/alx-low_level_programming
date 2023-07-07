#include "main.h"

/**
  * _pow_recursion - function that returns the value of x
  * @x: value multiplied
  * @y: times that multiplication takes place
  *
  * Return: value of x^y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
