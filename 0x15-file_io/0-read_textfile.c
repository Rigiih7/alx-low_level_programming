#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, i, j;
	char *text_file;

	text_file = malloc(letters);
	if (text_file == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(text_file);
		return (0);
	}

	i = read(f, text_file, letters);

	j = write(STDOUT_FILENO, text_file, i);

	close(f);

	return (j);
}
