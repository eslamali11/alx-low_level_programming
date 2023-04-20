#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a nums of argument
 *
 * Return: void
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: a nums of argument
 *
 * Return: void
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @arg: a nums of args
 *
 * Return: void
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_str - print a string
 *
 * @arg: a nums of args
 *
 * Return: void
*/

void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - just print anything
 *
 * @format: string of character
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print_func(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
