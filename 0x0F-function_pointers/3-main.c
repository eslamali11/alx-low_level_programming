#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the result of operation
 *
 * @argc: num of arg's
 * @argv: args that passed to funcion
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op;
	int n1, n2;

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
