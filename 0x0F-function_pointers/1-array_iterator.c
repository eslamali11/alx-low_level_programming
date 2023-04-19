void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
