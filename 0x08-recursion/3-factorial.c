/**
 * factorial - return a factorial of int
 *
 * @n: the numper
 *
 * Return: -1 if lower than 0
 *
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
