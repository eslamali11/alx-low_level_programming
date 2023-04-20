#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 *
 * @argc: num of args
 * @argv: the args
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int byt, i;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		printf("%.2x", p[i] & 0xFF);
		if (i != byt - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
