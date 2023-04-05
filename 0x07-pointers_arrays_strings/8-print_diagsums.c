#include <stdio.h>

/**
 * print_diagsums - print the sum of matrix
 * @a: input
 * @size: the size
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, i1, i2;

	i1 = 0;
	i2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			i1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			i2 += a[i];
	}
	printf("%d, %d\n", i1, i2);
}
