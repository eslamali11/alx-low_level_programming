#include "main.h"

/**
 * _strlen_recursion - just return the lenght of a string
 *
 * @s: the string
 *
 * Return: the lenght
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	else
		return (count);
}
