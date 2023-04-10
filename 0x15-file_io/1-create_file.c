#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Return: 1 if it works, or -1 if there is an error
 */

int create_file(const char *filename, char *text_content)
{
	int b = 0, brio;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[b] != '\0')
	{
		b++;
	}

	brio = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (brio == -1)
		return (-1);

	write(brio, text_content, b);

	return (1);
}
