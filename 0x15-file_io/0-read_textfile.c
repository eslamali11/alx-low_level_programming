#include "main.h"

/**
 * read_textfile - read the file and print it to stdout
 *
 * @filename: the name of the file
 * @letters: num of letters
 *
 * Return: NULL or fails return 0 - or actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t OPEN, READ, WRITE;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	OPEN = open(filename, O_RDONLY);
	READ = read(OPEN, buff, letters);
	WRITE = write(STDOUT_FILENO, buffer, r);

	if (OPEN == -1 || READ == -1 || WRITE == -1 || WRITE != READ)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(OPEN);

	return (WRITE);
}
