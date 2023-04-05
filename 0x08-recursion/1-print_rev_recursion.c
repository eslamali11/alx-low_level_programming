#include "main.h"

/**
 * _print_rev_recursion - just print a string in reverse 
 *
 * @s: the string 
 *
 * Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
