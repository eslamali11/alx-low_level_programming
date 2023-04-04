#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: the elements
 *
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; a[y][8]; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}
}
