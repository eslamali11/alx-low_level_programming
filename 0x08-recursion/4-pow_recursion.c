/**
 * _pow_recursion - return x pow y
 *
 * @x: the num
 * @y: the pow
 *
 * Return: the value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
