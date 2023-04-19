/**
 * print_name - just print the name
 *
 * @name: the name
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
