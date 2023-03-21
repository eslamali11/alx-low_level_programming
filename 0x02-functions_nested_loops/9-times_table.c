#include "main.h"

/**
 * Description: prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int row, column, pro, t, o;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			pro = row * column;
			t = pro / 10;
			o = pro % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (pro < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
