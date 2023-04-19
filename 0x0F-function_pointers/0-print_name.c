/**
 * print_name - just print the name
 *
 * @name: the name
 * @f: pointer to a function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
