#include "main.h"

/**
  * _puts_recursion - function that prints a strig
  * @s: the string to be printed
  *
  *Return: Nothing (success)
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
