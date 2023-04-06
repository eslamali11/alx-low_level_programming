/**
 * _sqrt - finder square root
 *
 *
 * @num1: the number to be find
 * @num2: the root tester
 *
 * Return: square root
*/

int _sqrt(int num1, int num2)
{
	if ((num2 * num2) == num1)
		return (num2);

	if (num2 == num1 / 2)
		return (-1);

	return (_sqrt(num1, num2 + 1));
}

/**
 * _sqrt_recursion - return square root
 * @n: the numper
 * Return: return -1 if not have square root
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
