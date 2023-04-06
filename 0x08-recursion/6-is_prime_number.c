/**
 * checker - Checks if a number is divisible.
 * @num1: The number to be checked.
 * @num2: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int checker(int num1, int num2)
{
	if (num1 % num2 == 0)
		return (0);

	if (num2 == num1 / 2)
		return (1);

	return (checker(num1, num2 + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The numper
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (checker(n, num));
}
